char	*ft_strlowcase(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if ('A' <= str[idx] && str[idx] <= 'Z')
			str[idx] += 32;
		idx++;
	}
	return (str);
}
