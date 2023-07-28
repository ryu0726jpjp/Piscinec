/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:34:55 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/24 15:28:56 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(char *src)
{
	char	*input;
	char	*p_src;
	char	*p_input;
	int		len;

	p_src = src;
	len = 0;
	while (*p_src)
	{
		p_src++;
		len++;
	}
	input = malloc (len + 1);
	p_input = input;
	while (*src)
	{
		*p_input = *src;
		p_input++;
		src++;
	}
	*p_input = '\0';
	return (input);
}

// int main(void)
// {
//     char original_str[100]; 
//     char *duplicate_str1;
// 	char *duplicate_str2;

//     printf("Enter a string : ");
//     scanf("%s", original_str);

//     duplicate_str1 = strdup(original_str);
// 	duplicate_str2 = ft_strdup(original_str);

//     printf("You entered : %s\n", duplicate_str1);
// 	printf("You entered : %s\n", duplicate_str2);
//     return 0;
// }