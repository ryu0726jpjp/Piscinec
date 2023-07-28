/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:35:30 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/26 13:22:52 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putnbr(int nb)
// {
// 	char	digit;

// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	else if (nb < 0)
// 	{
// 		write(1, "-", 2);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr(nb / 10);
// 	digit = nb % 10 + '0';
// 	write(1, &digit, 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int len = sizeof(tab) / sizeof(tab[0]);
// 	ft_foreach(tab, len, &ft_putnbr);
// 	write(1, "\n", 1);
// }