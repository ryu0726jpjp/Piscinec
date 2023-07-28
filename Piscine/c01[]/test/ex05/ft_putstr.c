#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char string[] = "HelloWorld!";
	ft_putstr(&string[12]);
	return (0);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
