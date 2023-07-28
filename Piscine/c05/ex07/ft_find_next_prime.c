/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:04:49 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/18 19:24:07 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb)
{
	int num1;
	int num2;
	int mod;
	int i;

	i = 1;
	num1 = 1;
	if (nb == 0 || nb == 1)
		return(0);
	while (i < nb)
	{
		if (i == 1)
			num2 = num1 * num1;
		else
			num2 = num2 * num1;
		i++;
	}
	mod = num2 % nb;
	if (mod == nb - 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

int main(void)
{
	int num = 15;
	
	printf("Number : ");
	scanf("%d", &num);
	printf("Result : %d\n", ft_find_next_prime(num));
	return (0);
}