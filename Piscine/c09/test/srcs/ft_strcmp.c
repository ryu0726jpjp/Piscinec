/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:54:18 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/13 08:53:08 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
//  #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

// int main(void)
// {
// 	char string1[] = "HelloWorld!";
// 	char string2[] = "HelloWorld!";
// 	char string3[] = "Hello";
// 	int result1 = ft_strcmp("ABCD", "ABCDE");
// 	int result2 = ft_strcmp(string1, string3);
// 	int result3 = strcmp("ABCD", "ABCDE");
// 	if (result1 == 0)
// 		printf("Same!\n");
// 	else
// 		printf("Different!\n");
// 	if (result3 == 0)
// 		printf("Same!\n");
// 	else
// 		printf("Different!\n");

// 		return (0);
// }
