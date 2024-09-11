int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	while (result * result < nb)
	{
		result++;
	}
	if (result * result == nb)
		return (result);
	return (0);
}
