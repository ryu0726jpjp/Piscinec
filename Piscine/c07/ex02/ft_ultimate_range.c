/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:23:02 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/24 15:37:45 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*input;
	int	*start;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	input = malloc(size);
	start = input;
	while (min < max)
	{
		*input = min;
		input++;
		min++;
	}
	*range = start;
	return (size);
}

// int main(void)
// {
//     int minimum;
//     int maximum;
//     int *array;

//     printf("Minimum : ");
//     scanf("%d", &minimum);
//     printf("Maximum : ");
//     scanf("%d", &maximum);

//     array = NULL;
//     int size = ft_ultimate_range(&array, minimum, maximum);

//     if (array == NULL)
//     {
//         printf("Error: Unable to create the array.\n");
//         return 1;
//     }

//     printf("size : %d\n", size);
// 	printf("array : %p\n", array);

//     return 0;
// }