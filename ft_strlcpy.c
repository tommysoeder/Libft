/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:06:49 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:37:15 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char dest[10] = "asdas";*/
	/*char dest2[10];*/
//	char *src = "Hola";
	/*int	r;*/

	/*r = ft_strlcpy(dest, src, 3);*/
	//ft_strlcpy(dest, src, 4);
	/*strlcpy(dest, src, 3);*/
	//printf("%d %s\n", ft_strlcpy(dest, src, 4), dest);
	/*printf("%s\n", dest2);*/
	//return (0);
//}
