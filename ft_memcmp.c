/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:53:50 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 20:18:51 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char s1[] = "Hola42";
	char s2[] = "Hola21";
	int r1 = ft_memcmp(s1, s2, 6);
	int r2 = memcmp(s1, s2, 6);

	printf("Resultado ft_memcmp: %d\n", r1);
	printf("Resultado memcmp: %d\n", r2);
}
*/
