#include <stdio.h>

// int main(void)
// {
// 	int a = 13 / 5, b = 13 % 5;
// 	printf("%d   %d", a, b);
// }

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int num1;
	int num2;

	ft_div_mod(13, 5, &num1, &num2);
	printf("num1 = %d, num2 = %d", num1, num2);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

