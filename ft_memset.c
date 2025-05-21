/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:01 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 17:54:04 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char buffer[15] = "Hola Mundo!";
	printf("Antes: %s\n", buffer);

	ft_memset(buffer + 5, '*', 3);

	printf("Después: %s\n", buffer);
	return (0);
}*/
