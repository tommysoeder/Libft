/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:12:48 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/07 16:30:09 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;
	size_t	i;
	char	*temp;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	temp = (char *)ptr;
	i = 0;
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
    {
        printf("Error\n");
    }
    printf("arr[0] = %d\n", arr[0]);
	printf("arr[1] = %d\n", arr[1]);
	printf("arr[2] = %d\n", arr[2]);
	printf("arr[3] = %d\n", arr[3]);
	printf("arr[4] = %d\n", arr[4]);

    free(arr);
    return(0);
}*/
