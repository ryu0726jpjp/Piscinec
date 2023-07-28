/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:28:12 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/25 20:33:24 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);

int ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if (str[i] == str[j] || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	char c;
	int min_flg;

	min_flg = 0;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (!(ft_check_base(base)) || base_len <= 1)
		return ;
	if (nbr < 0)
	{
		if (nbr == -2147483648){
			min_flg = 1;
			nbr /= base_len;
			c = base[nbr%base_len];
		}
		write(1, "-", 1);
		nbr = -nbr;
	}
	if(nbr < base_len){
		write(1,&base[nbr],1);
	}else{
		ft_putnbr_base(nbr/base_len, base);
		ft_putnbr_base(nbr%base_len, base);
	}
	if(min_flg)
		write(1, &c, 1);
}

void ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to);
}

int main(void)
{
	char num[] = "  \t\n\v\r\f +++++---++++af0";
	char base_from[] = "0123456789abcdef";
	char base_to[] = "abcdefghij";
	// char *result = 
	ft_convert_base(num, base_from, base_to);
	printf("\n");
	// printf("%s", result);
}