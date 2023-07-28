#include <unistd.h>

int ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if (str[i] == str[j] || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	char c;
	int min_flg;

	min_flg = 0;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (!(ft_check_base(base)) || base_len <= 1)
		return ;
	if (nbr < 0)
	{
		if (nbr == -2147483648){
			min_flg = 1;
			nbr /= base_len;
			c = base[nbr%base_len];
		}
		write(1, "-", 1);
		nbr = -nbr;
	}
	if(nbr < base_len){
		write(1,&base[nbr],1);
	}else{
		ft_putnbr_base(nbr/base_len, base);
		ft_putnbr_base(nbr%base_len, base);
	}
	if(min_flg)
		write(1, &c, 1);
}

// int main(void)
// {
// 	char base[] ="01";
// 	int num = 256;
// 	char base2[] ="0123456789abcdef";
// 	int num2 = -256;
// 	char base3[] ="1";
// 	int num3 = 256;
// 	char base4[] ="";
// 	int num4 = 256;
// 	char base5[] ="+-01";
// 	int num5 = 256;
// 	char base6[] ="012345675";
// 	int num6 = 256;
// 	char base7[] ="0123456789abcdef";
// 	int num7 = -2147483648;

// 	ft_putnbr_base(num, base);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num2, base2);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num3, base3);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num4, base4);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num5, base5);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num6, base6);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(num7, base7);
// 	write (1, "\n", 1);
// 	return (0);
// }