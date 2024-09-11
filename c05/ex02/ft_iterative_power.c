int	ft_iterative_power(int nb, int power)
{
	int	result;

	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	result = 1;
	while (power--)
	{
		result *= nb;
	}
	return (result);
}
