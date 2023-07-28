#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char string[] = "HelloWorld!";

	int length = ft_strlen(&string[0]);
	printf("%d\n", length);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}