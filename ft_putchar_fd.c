/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:24 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:46:37 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Envía el carácter ’c’ al file descriptor
// especificado.

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    char c = 'A';

    ft_putchar_fd(c, 1);
    ft_putchar_fd('\n', 1);
}*/
