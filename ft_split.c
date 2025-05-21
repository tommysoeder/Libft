/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:02:59 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/20 17:32:05 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

static char	*ft_sep_lines(char const *str, int depth, char charset)
{
	int	count;
	int	i;
	int	start;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == charset)
			i++;
		if (!str[i])
			break ;
		if (count == depth)
		{
			start = i;
			while (str[i] && str[i] != charset)
				i++;
			return (ft_substr(str, start, i - start));
		}
		while (str[i] && str[i] != charset)
			i++;
		count++;
	}
	return (NULL);
}

static int	ft_depth(char const *str, char charset)
{
	int	depth;
	int	word;

	depth = 0;
	word = 0;
	while (*str)
	{
		if (*str != charset && !word)
		{
			depth++;
			word = 1;
		}
		if (*str == charset)
			word = 0;
		str++;
	}
	return (depth);
}

char	**ft_split(char const *str, char charset)
{
	char	**result;
	int		depth;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	depth = ft_depth(str, charset);
	result = (char **)malloc((depth + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < depth)
	{
		result[i] = ft_sep_lines(str, i, charset);
		if (!result[i])
		{
			while (i-- > 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[depth] = NULL;
	return (result);
}
// int main(void)
// {
//     char **result;
//     int i;

//     result = ft_split("Estamos muy a gusto aquí", ' ');

//     if (!result)
//     {
//         printf("Error");
//         return (1);
//     }
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d] = \"%s\"\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return(0);
// }
