#include <unistd.h>

short int	is_printable(char c)
{
	return (31 < c && c < 127);
}

void	putchar_hex(unsigned char c)
{
	char	hex[3];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = base[c / 16];
	hex[2] = base[c % 16];
	write(1, hex, 3);
}

/*
void	ft_putstr_non_printable(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (is_printable(str[idx]))
			write(1, &str[idx], 1);
		else
			putchar_hex(str[idx]);
		idx++;
	}
}
*/

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
			putchar_hex(*str);
		str++;
	}
}
