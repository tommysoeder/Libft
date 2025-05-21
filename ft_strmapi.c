/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:59 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 17:17:52 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Aplica la función ’f’ a cada carácter de la cadena
// ’s’, pasando su índice como primer argumento y el
// propio carácter como segundo argumento. Se crea una
// nueva cadena (utilizando malloc(3)) para recoger
// los resultados de las sucesivas aplicaciones de
// ’f’.

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}

// char    to_upper_wrapper(unsigned int i, char c)
// {
//     (void)i;
//     return (char)ft_toupper(c);
// }

// int main(void)
// {
//     char    *original = "Hola a todos!";
//     char    *resultado;

//     resultado = ft_strmapi(original, to_upper_wrapper);
//     if (!resultado)
//     {
//         printf("Error\n");
//         return(1);
//     }
//     printf("Original: %s\n", original);
//     printf("Resultado: %s\n", resultado);
//     free(resultado);
//     return (0);
// }
