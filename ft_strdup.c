/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:12:48 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 13:39:20 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	size;

	size = ft_strlen(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, size + 1);
	return (dest);
}
/*
int main(void)
{
    const char *src = "Hola";
    char *copia = ft_strdup(src);
    if (!copia)
        printf("Error");
    printf("Original: %s\n", src);
    printf("Copia: %s\n", copia);
    free(copia);
}*/
