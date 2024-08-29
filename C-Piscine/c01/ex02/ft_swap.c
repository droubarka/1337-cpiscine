void	ft_swap(int *a, int *b)
{
	if (a != b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
	}
}
