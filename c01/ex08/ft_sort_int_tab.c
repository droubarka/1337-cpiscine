void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur_idx;
	int	nxt_idx;
	int	min_idx;

	cur_idx = 0;
	while (cur_idx < size - 1)
	{
		min_idx = cur_idx;
		nxt_idx = cur_idx + 1;
		while (nxt_idx < size)
		{
			if (tab[nxt_idx] < tab[min_idx])
				min_idx = nxt_idx;
			nxt_idx++;
		}
		if (cur_idx != min_idx)
			ft_swap(&tab[cur_idx], &tab[min_idx]);
		cur_idx++;
	}
}
