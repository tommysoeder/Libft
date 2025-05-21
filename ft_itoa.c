/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:03:10 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/15 12:03:11 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.
#include <stdlib.h>
// #include <stdio.h>

static int	ft_intlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[len--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}
/*
int main(void)
{
    printf("itoa(42) = %s\n", ft_itoa(42));
	printf("itoa(0) = %s\n", ft_itoa(0));
	printf("itoa(-1234) = %s\n", ft_itoa(-1234));
	printf("itoa(-2147483648) = %s\n", ft_itoa(-2147483648));
}*/