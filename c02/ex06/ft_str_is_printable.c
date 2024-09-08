/*
int	ft_str_is_printable(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!(32 <= str[idx] && str[idx] <= 126))
			return (0);
		idx++;
	}
	return (1);
}
*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(32 <= *str && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
