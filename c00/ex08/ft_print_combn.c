#include <unistd.h>

void	increment(char *combination, int idx)
{
	if (combination[idx] < idx + '0')
	{
		combination[idx]++;
	}
	else
	{
		increment(combination, idx - 1);
		combination[idx] = combination[idx - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	char	combination[10];
	short int		idx;

	combination[9 - n] = '0';
	idx = 10 - n;
	while (idx < 10)
	{
		combination[idx] = idx - (10 - n) + '0';
		idx++;
	}
	while (combination[9 - n] == '0')
	{
		write(1, &combination[10 - n], n);
		increment(combination, 9);
		if (combination[9 - n] == '0')
			write(1, ", ", 2);
	}
}
