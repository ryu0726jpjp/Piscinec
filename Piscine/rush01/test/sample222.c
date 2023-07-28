#include <unistd.h>

#define SIZE 4

int myatoi(char *str) {
    int num = 0;
    
    while(*str != '\0'){
        num += *str - 48;
        num *= 10;
        str++;
    }
    
    num /= 10;
    
    return num;
}

void initialization (int *grid[SIZE][SIZE])
{
	while (*grid)
	{
		grid [SIZE][SIZE] = 0;
		grid++;
	}
	return (0);
}

int find1(int *grid)
{
	int i;
	int col;
	int row;


	i = 0;
	while (*grid)
	{
		if ((i >= 0 && i <= 3) && (*grid[i][col] = 0))
			*grid[i][col] = 4;
		if ((i >= 4 && i <= 7) && (*grid[i][col] = 0))
			*grid[i][col] = 4;
		if ((i >= 8 && i <= 11) && (*grid[i][col] = 0))
			*grid[i][col] = 4;
		if ((i >= 12 && i <= 15) && (*grid[i][col] = 0))
			*grid[i][col] = 4;
		grid++;
	}
	return (1)
}

int find4r (int board[4][4], int *input, int pos)
{
	int fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		pos++;
	}
}

void	find4c(int board[4][4], int *input)
{
	int pos;
	int fill;

	pos = 0;
	fill = 0;
	while ((input[pos]) && pos < 8)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
			while (fill < 4)
			{
				board[fill][pos] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		pos++;
	}
	lookfor4_1(board, input, pos);
}

int main (int argc, char *argv[])
{
	int input[16];
	int grid[SIZE][SIZE];

	if (argc != 2)
		write(1, "Error\n", 6);
	initialize(grid[SIZE][SIZE]);
	ft_atoi();
	find1();
	find4r();
	find4c();

	return (0);
}