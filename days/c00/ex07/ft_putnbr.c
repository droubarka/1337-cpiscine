#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		if (nb < 0)
		{
			ft_putnbr(-1 * (nb / 10));
			nb = -1 * (nb % 10);
		}
	}
	if (9 < nb)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}
