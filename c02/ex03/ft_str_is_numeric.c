/*
int	ft_str_is_numeric(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!('0' <= str[idx] && str[idx] <= '9'))
			return (0);
		idx++;
	}
	return (1);
}
*/

int ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
