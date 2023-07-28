#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
	int num1 = 1;
	int num2 = 2;

	ft_swap(&num1, &num2);
	ft_swap2(num1,num2);
	printf("num1 = %d, num2 = %d", num1, num2);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return ;
}

void ft_swap2(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
	return ;
}

