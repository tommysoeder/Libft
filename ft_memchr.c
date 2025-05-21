/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:09:40 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:35:41 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
    char str[] = "Hola mundo!";
    char *result = ft_memchr(str, 'm', 10);

    if (result)
        printf("Found: %c\n", *result);
    else
        printf("Not found.\n");
}
*/
