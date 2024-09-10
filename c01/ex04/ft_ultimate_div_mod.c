void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rm;

	rm = *a % *b;
	*a = *a / *b;
	*b = rm;
}
