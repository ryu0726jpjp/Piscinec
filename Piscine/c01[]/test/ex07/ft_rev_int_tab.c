#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int array[3] = {2, 1, 4};
	ft_rev_int_tab(array, 3);
	for (int i = 0; i < 3 ; i++)
	{
			printf("%d", array[i]);
	}
	printf("\n");
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = size - 1;

	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
	return ;
}