/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:24:48 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/25 22:38:12 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	num_digits(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

void	ft_itos(unsigned int num, char *str)
{
	int	digits;

	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	digits = num_digits(num);
	str[digits] = '\0';
	while (digits > 0)
	{
		str[digits - 1] = num % 10 + '0';
		num /= 10;
		digits--;
	}
}

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_show_tab(t_stock_str *par)
{
	char	str_size[20];

	while (par->str)
	{
		write(1, par->str, ft_strlen2(par->str));
		write(1, "\n", 1);
		ft_itos(par->size, str_size);
		write(1, str_size, ft_strlen2(str_size));
		write(1, "\n", 1);
		write(1, par->copy, ft_strlen2(par->copy));
		write(1, "\n", 1);
		par++;
	}
}
