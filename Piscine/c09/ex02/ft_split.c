/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:40:11 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/27 07:38:43 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int nb)
{
	int	i;

	i = 0;
	while (src[i] && (i < nb))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < nb)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_valid(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!(is_valid(str[i], charset)) && str[i] == '\0')
		i++;
	return (i);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		while (str[i] && is_valid(str[i], charset))
			i++;
		if (!(is_valid(str[i], charset)) && str[i])
			count++;
		while (str[i] && (!(is_valid(str[i], charset))))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	int		k;
	char	**out;
	char	*p_str;
	int		i;

	k = -1;
	p_str = str;
	wc = word_count(p_str, charset);
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	if (out == NULL)
		return (NULL);
	while (++k < wc)
	{
		i = check_charset(p_str, charset);
		out[k] = (char *)malloc(i + 1);
		if (out[k] == NULL)
			return (NULL);
		ft_strncpy(out[k], p_str, i);
		p_str += (i + 1);
		while (*p_str && is_valid(*p_str, charset))
			p_str++;
	}
	out[k] = NULL;
	return (out);
}

#include <stdio.h>

// メモリを解放する関数
void ft_free_split(char **split) {
    char **temp = split;
    while (*split)
        free(*split++);
    free(temp);
}

int main(void) {
    char *str = "This,,,,,is,a,test,,string";
    char *charset = ",";

    // ft_split関数を呼び出して文字列を分割
    char **result = ft_split(str, charset);

    if (result == NULL) {
        printf("Error: Unable to split the string.\n");
        return (1);
    }

    // 分割された文字列を表示
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }

    // メモリを解放
    ft_free_split(result);

    return (0);
}
