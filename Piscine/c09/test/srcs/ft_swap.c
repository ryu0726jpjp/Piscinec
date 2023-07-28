/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:45:22 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/26 10:14:40 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
// 	int num1 = 1;
// 	int num2 = 2;

// 	printf("Before : num1 = %d, num2 = %d\n", num1, num2);
// 	ft_swap(&num1, &num2);
// 	printf("After : num1 = %d, num2 = %d\n", num1, num2);
// 	return (0);
// }
