#include <unistd.h>

/*
void	ft_putstr(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	write(1, str, idx);
}
*/

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
