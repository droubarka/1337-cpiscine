/*
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rm;

	if (*b != 0)
	{
		rm = *a % *b;
		*a = *a / *b;
		*b = rm;
	}
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rm;

	rm = *a % *b;
	*a = *a / *b;
	*b = rm;
}
