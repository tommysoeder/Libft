/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:02:22 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 16:12:58 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) y devuelve una nueva
// string, formada por la concatenación de ’s1’ y
// ’s2’.

#include <stdlib.h>
#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
int	main(void)
{
	const char *parte1 = "Hola, ";
	const char *parte2 = "qué tal?";
	char	*resultado;

	resultado = ft_strjoin(parte1, parte2);
	if(resultado == NULL)
	{
		printf("Error");
		return(1);
	}
	printf("Resultado: %s\n", resultado);
	free(resultado);
}
*/
