int	ft_str_is_uppercase(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!('A' <= str[idx] && str[idx] <= 'Z'))
			return (0);
		idx++;
	}
	return (1);
}
