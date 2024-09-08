int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (*str++)
	{
		idx++;
	}
	return (idx);
}
