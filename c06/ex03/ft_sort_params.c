#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **addr1, char **addr2)
{
	char	*t_addr;

	t_addr = *addr1;
	*addr1 = *addr2;
	*addr2 = t_addr;
}

void	sort_str_tab(char **argv, int size)
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
			if (ft_strcmp(argv[nxt_idx], argv[min_idx]) < 0)
			{
				min_idx = nxt_idx;
			}
			nxt_idx++;
		}
		if (cur_idx != min_idx)
		{
			ft_swap(&argv[cur_idx], &argv[min_idx]);
		}
		cur_idx++;
	}
}

int	main(int argc, char **argv)
{
	sort_str_tab(argv + 1, argc - 1);
	while (--argc)
	{
		argv++;
		while (**argv)
		{
			write(1, (*argv)++, 1);
		}
		write(1, "\n", 1);
	}
}
