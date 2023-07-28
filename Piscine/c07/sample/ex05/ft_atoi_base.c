/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:55:57 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/25 19:51:19 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	is_valid_base(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = base[i];
	while (base[i])
	{
		if (c == '+' || c == '-' || (c > 8 && c < 14) || c == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (c == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	char_to_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_while(char *str, char *base, int base_count)
{
	int	result;
	int	digit_value;

	result = 0;
	while (*str)
	{
		digit_value = char_to_digit(*str, base);
		if (digit_value == -1)
			return (0);
		result = result * base_count + digit_value;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_count;
	int	result;
	int	sign;

	if (*str == '\0' || *base == '\0' || !is_valid_base(base))
		return (0);
	base_count = 0;
	while (base[base_count])
		base_count++;
	while ((*str > 8 && *str < 14) || (*str == 32))
			str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = ft_while(str, base, base_count);
	return (sign * result);
}

// int main(void)
// {
// 	char str[] = "  \t\n\v\r\f +++++---++++af0";
// 	char base[] = "0123456789abcdef";
// 	char base2[] = "0123435";
// 	char base3[] = "012-";
// 	char base4[] = "01+2";
// 	char base5[] = "0";
// 	char base6[] = "";

// 	int result = ft_atoi_base(str, base);
// 	int result2 = ft_atoi_base(str, base2);
// 	int result3 = ft_atoi_base(str, base3);
// 	int result4 = ft_atoi_base(str, base4);
// 	int result5 = ft_atoi_base(str, base5);
// 	int result6 = ft_atoi_base(str, base6);
// 	printf("%d\n", result);
// 	printf("%d\n", result2);
// 	printf("%d\n", result3);
// 	printf("%d\n", result4);
// 	printf("%d\n", result5);
// 	printf("%d\n", result6);
// 	return (0);
// }