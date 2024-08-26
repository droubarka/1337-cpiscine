#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
		sign = 'N';
	else
		sign = 'P';
	write(1, &sign, 1);
}
