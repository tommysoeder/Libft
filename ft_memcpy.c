/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:55:24 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:25:43 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char origen[] = "Hola Mundo!";
	char destino[20];

	ft_memcpy(destino, origen, 12);
	printf("Destino: %s\n", destino);

	return (0);
}
*/
