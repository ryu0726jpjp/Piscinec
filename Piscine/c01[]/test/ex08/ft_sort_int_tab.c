#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[5] = {3, 6, 1, 7, 4};
	ft_sort_int_tab(array, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}

