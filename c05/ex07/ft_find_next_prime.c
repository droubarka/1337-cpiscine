/*
int	ft_is_prime(int nb)
{
	int	divisor;
	int	sqrt_nb;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	divisor = 2;
	sqrt_nb = (int) sqrt((double) nb); //!?
	while (divisor <= sqrt_nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}
*/

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	divisor = 2;
	while (divisor < nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
