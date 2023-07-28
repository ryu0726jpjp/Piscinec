/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:59:11 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/13 01:03:41 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char digit;
	if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return;
		}
	else if (nb < 0)
	{
		write(1, "-", 2);
		nb = -nb;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int main(void)
{
	ft_putnbr(456);
	write(1, "\n", 1);
	ft_putnbr(-456);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}