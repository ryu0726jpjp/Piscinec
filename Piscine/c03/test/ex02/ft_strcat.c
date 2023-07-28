/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:57:30 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/13 08:39:18 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

// int main(void)
// {
// 	char hello[16]	= "Hello";	
// 	char world[]	= "World";	
// 	char hello2[16] = "HELLO";
// 	char world2[] = "WORLD";
// 	printf("Befor1 : %s\n", hello);
// 	printf("Before2 : %s\n", hello2);
// 	strcat(hello, world);
// 	ft_strcat(hello2, world2);
// 	printf("After1 : %s\n", hello);
// 	printf("After2 : %s\n", hello2);
// 	return 0;
// }