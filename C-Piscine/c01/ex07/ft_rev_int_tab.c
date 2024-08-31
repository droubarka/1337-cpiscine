void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;

	idx = 0;
	while (idx < --size)
	{
		ft_swap(&tab[idx++], &tab[size]);
	}
}
