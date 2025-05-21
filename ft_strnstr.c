/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:14 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 17:51:10 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *haystack = "Hola, ¿Qué tal?";
	char *needle = "tal";
	int n = 25;

	char *res = ft_strnstr(haystack, needle, n);
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("%s\n", "Not found");
}*/
