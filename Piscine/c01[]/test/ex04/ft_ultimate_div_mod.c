#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int num1 = 13;
	int num2 = 5;
	ft_ultimate_div_mod(&num1, &num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	// int temp1;
	// int temp2;
	int div;
	int mod;
	
	// temp1 = *a;
	// temp2 = *b;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	return ;
}
