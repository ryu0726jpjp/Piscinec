/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:04:47 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/26 03:46:48 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (*src)
	{
		*p_dest = *src;
		p_dest++;
		src++;
	}	
	*p_dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_length(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = 0;
	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	len = ft_strlen(sep) * (size - 1) + ft_length(size, strs);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// int main(void)
// {
//     char separator[] = ", ";
//     char strings[7][10] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

//     char *str_pointers[7];
//     for (int i = 0; i < 7; i++)
//     {
//         str_pointers[i] = strings[i];
//     }

//     char *result = ft_strjoin(7, strings, separator);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }
