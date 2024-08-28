#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	write(1, str, idx);
}
