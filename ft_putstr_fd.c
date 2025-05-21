/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:39 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:39:26 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Envía la string ’s’ al file descriptor
// especificado.

#include <unistd.h>
// #include <stdio.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
//
// int main(void)
// {
//     char *str = "Hola corrector!\n";

//     ft_putstr_fd(str, 1);
//     return 0;
// }
