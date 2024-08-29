#include <unistd.h>

void	increment(char *combs, int idx)
{
	char	*px;

	px = &combs[idx];
	if (*px < idx + '0')
	{
		*px += 1;
	}
	else
	{
		increment(combs, idx - 1);
		*px = *(px - 1) + 1;
	}
}

void	ft_print_combn(int n)
{
	char	combs[10];
	int		idx;

	combs[9 - n] = '0';
	idx = 10 - n;
	while (idx < 10)
	{
		combs[idx] = idx - (10 - n) + '0';
		idx++;
	}
	while (combs[9 - n] == '0')
	{
		write(1, &combs[10 - n], n);
		increment(combs, 9);
		if (combs[9 - n] == '0')
			write(1, ", ", 2);
	}
}
