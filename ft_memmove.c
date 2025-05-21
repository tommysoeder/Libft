/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:33:18 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:49:11 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dest);
}
/*
void *ft_memmove(void *dest, const void *src, size_t len);

int main(void)
{
    char buffer1[30] = "1234567890";
    char buffer2[30] = "1234567890";

    ft_memmove(buffer1 + 2, buffer1, 5);
    memmove(buffer2 + 2, buffer2, 5);

    printf("Resultado ft_memmove : %s\n", buffer1);
    printf("Resultado memmove    : %s\n", buffer2);
}*/
