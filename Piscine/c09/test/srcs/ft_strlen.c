/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:38:41 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/18 16:49:32 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

// int main(void)
// {
// 	char string[] = "HelloWorld!";
// 	int result = ft_strlen(string);
// 	printf("%d\n", result);
// 	return (0);
// }
