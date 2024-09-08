#include <unistd.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (*str++)
	{
		idx++;
	}
	return (idx);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
