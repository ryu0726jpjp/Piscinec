/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:16:15 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/26 19:19:18 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int x[], int n)
{
	int	i;
	int	nxt_nbr;

	i = 0;
	nxt_nbr = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
			nxt_nbr = 0;
		i++;
	}
	if (nxt_nbr == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_while(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				return ;
			ft_print(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			ft_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	x[n];

	ft_while(x, 0, n);
}

// int	main(void)
// {
// 	ft_print_combn(3);
// 	return (0);
// }
