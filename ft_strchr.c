/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:14 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:27:25 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == ((char)c))
			return ((char *) s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char *s = "Hasta luego!";
	int c = 's';
	char *resultado = ft_strchr(s, c);
	if (resultado != NULL)
		printf("Carácter encontrado: %c\n", *resultado);
	else
		printf("Carácter no encontrado.\n");
}*/
