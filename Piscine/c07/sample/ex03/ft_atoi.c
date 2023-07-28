/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:19:34 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/25 21:34:34 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	num;

	while ((*str > 8 && *str < 14) || (*str == 32))
	{
			str++;
	}
	count = 0;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			count++;
		str++;
	}
	num = 0;
	while (*str >= 48 && *str <= 57)
	{
		*str = *str - 48;
		num = (num + *str) * 10;
		str++;
	}
	num = (num / 10);
	if (count % 2 == 1)
		num = -num;
	return (num);
}

// int main(void)
// {
//     char digits[] = " \n\t\v\f\r---+--+1234ab567";
//     printf("%d\n", ft_atoi(digits));
// }