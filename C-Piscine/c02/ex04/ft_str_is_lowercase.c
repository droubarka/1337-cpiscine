int	ft_str_is_lowercase(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!('a' <= str[idx] && str[idx] <= 'z'))
			return (0);
		idx++;
	}
	return (1);
}
