/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:23:45 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/26 16:32:10 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int i;

	result = (int *)malloc(length * sizeof(int));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

// // 例として、引数の値を2倍にする関数
// int double_value(int num) {
//     return num * 2;
// }

// int main() {
//     // テスト用の配列
//     int test_array[] = {1, 2, 3, 4, 5};
//     int length = sizeof(test_array) / sizeof(test_array[0]);

//     // 関数ポインタにdouble_valueを指定してft_mapを呼び出す
//     int *result_array = ft_map(test_array, length, double_value);

//     if (result_array != NULL) {
//         printf("Original Array: ");
//         for (int i = 0; i < length; i++) {
//             printf("%d ", test_array[i]);
//         }
//         printf("\n");

//         printf("Result Array: ");
//         for (int i = 0; i < length; i++) {
//             printf("%d ", result_array[i]);
//         }
//         printf("\n");

//         // ft_map関数によって動的に割り当てられたメモリを解放
//         free(result_array);
//     } else {
//         printf("Memory allocation failed. Unable to test.\n");
//     }

//     return 0;
// }