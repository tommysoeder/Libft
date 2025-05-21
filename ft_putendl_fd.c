/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:31 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:38:32 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Envía la string ’s’ al file descriptor dado,
// seguido de un salto de línea.

//#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
//
// int main(void)
// {
//     ft_putendl_fd("Hola !", 1);
//     return 0;
// }
