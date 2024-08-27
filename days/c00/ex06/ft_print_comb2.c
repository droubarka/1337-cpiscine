#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_comb2(short int num1, short int num2)
{
	ft_putchar(num1 / 10 + '0');
	ft_putchar(num1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(num2 / 10 + '0');
	ft_putchar(num2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	short int	num1;
	short int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			write_comb2(num1, num2);
			if (num1 + 1 <= 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
