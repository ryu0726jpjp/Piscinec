/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:53:21 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/20 00:28:07 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int j;

	if (nb == 0 || nb == 1)
	 return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i < nb / i)
		i++;
	j = 2;
	while (j <= i)
	{
		if (nb % j == 0)
			return (0);
		else
			j++;
	}
	return (1);
}

int main(void)
{
	int num;
	
	printf("Number : ");
	scanf("%d", &num);
	printf("Result : %d\n", ft_is_prime(num));
	return (0);
}