/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:01:21 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/24 15:31:45 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*input;
	int	*p_input;

	input = malloc(sizeof(max - min));
	p_input = input;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		*input = min;
		input++;
		min++;
	}
	*input = '\0';
	return (p_input);
}

// int main(void)
// {
//     int minimum;
//     int maximum;
//     int *result;

//     printf("Minimum : ");
//     scanf("%d", &minimum);
//     printf("Maximum : ");
//     scanf("%d", &maximum);

//     result = ft_range(minimum, maximum);

//     if (result == NULL)
//     {
//         printf("Invalid input\n");
//     }
//     else
//     {
//         printf("Result: ");
//         int *ptr = result;
//         while (*ptr)
//         {
//             printf("%d ", *ptr);
//             ptr++;
//         }
//         printf("\n");
//         free(result); 
//     }

//     return 0;
// }
