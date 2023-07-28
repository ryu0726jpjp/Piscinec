/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:54:18 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/13 08:53:58 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((count < n) && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
		count++;
	}
	return (0);
}

// int main(void)
// {
// 	char string1[] = "HelloWorld!";
// 	char string2[] = "HelloWorld!";
// 	char string3[] = "Hello";
// 	char string4[] = "HelooWorld!";
// 	int a = 5;
// 	int result1 = ft_strncmp(string1, string2, a);
// 	int result2 = ft_strncmp(string1, string3, a);
// 	int result3 = ft_strncmp(string3, string4, a);
// 	if (result1 == 0)
// 		printf("Same!\n");
// 	else
// 		printf("Different!\n");
// 	if (result2 == 0)
// 		printf("Same!\n");
// 	else
// 		printf("Different!\n");
// 	if (result3 == 0)
// 		printf("Same!\n");
// 	else
// 		printf("Different!\n");

// 	if (strncmp(string1, string2, a) == 0)
// 	{
// 		printf("Same!\n");
// 	}
// 	else
// 	{
// 		printf("Different!\n");
// 	}
// 	if (strncmp(string1, string3, a) == 0)
// 	{
// 		printf("Same!\n");
// 	}
// 	else
// 	{
// 		printf("Different!\n");
// 	}
// 	if (strncmp(string3, string4, a) == 0)
// 	{
// 		printf("Same!\n");
// 	}
// 	else
// 	{
// 		printf("Different!\n");
// 	}

// 		return (0);
// }
