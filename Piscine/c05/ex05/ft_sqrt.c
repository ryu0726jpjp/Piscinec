/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:17:17 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/19 19:32:01 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{	
	int	start;
	int	end;
	int	mid;

	start = 0;
	end = nb;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			start = mid + 1;
		else if (mid * mid > nb)
			end = mid - 1;
	}
	return (0);
}

// int main(void)
// {
// 	int num;
// 	printf("Number : ");
// 	scanf("%d", &num);
// 	printf("Result : %d\n", ft_sqrt(num));
// 	return (0);
// }
