/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:35 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/19 15:50:10 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Envía el número ’n’ al file descriptor dado.

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
//
// int main(void)
// {
//     ft_putnbr_fd(97, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-123456, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);
//     return 0;
// }
