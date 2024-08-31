int	ft_str_is_alpha(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!(('A' <= str[idx] && str[idx] <= 'Z')
				|| ('a' <= str[idx] && str[idx] <= 'z')))
			return (0);
		idx++;
	}
	return (1);
}
