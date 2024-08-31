char	*ft_strupcase(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if ('a' <= str[idx] && str[idx] <= 'z')
			str[idx] -= 32;
		idx++;
	}
	return (str);
}
