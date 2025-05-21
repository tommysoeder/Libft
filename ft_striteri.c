/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:48 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:51:23 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario.

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void    to_upper_sub(unsigned int i, char *c)
// {
//     (void)i;
//     *c = ft_toupper(*c);
// }

// int main(void)
// {
//     char str[] = "hola mundo";

//     ft_striteri(str, to_upper_sub);

//     printf("Resultado: %s\n", str);
//     return 0;
// }
