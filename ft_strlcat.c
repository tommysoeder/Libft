/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:17:46 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:36:24 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lg;
	size_t	lg2;

	i = 0;
	lg = ft_strlen(dest);
	lg2 = ft_strlen(src);
	if (size <= lg)
		return (size + lg2);
	while (src[i] && (i + lg < size - 1))
	{
		dest[lg + i] = src[i];
		i++;
	}
	dest[lg + i] = '\0';
	return (lg + lg2);
}
/*
int	main(void)
{
	char src[50] = "qué tal?";
	char dest[50] = "Hola, ";

//	ft_strlcat(dest, src, 5);
//	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 5));
}*/
