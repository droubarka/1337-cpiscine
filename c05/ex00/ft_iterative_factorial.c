int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb)
	{
		result *= nb--;
	}
	return (result);
}
