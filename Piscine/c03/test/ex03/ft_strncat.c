/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:51:34 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/13 08:54:36 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;

	while (*dest)
	{
		dest++;
	}
	count = 0;
	while (count < nb)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (dest);
}

// int main(void)
// {
// 	char test1[20] = "abcde";
// 	char test2[20] = "12345";
// 	printf("Before : %s\n", test1);
// 	ft_strncat(test1, test2, 3);
// 	printf("After : %s\n", test1);
// }