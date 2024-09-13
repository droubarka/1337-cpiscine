short int	is_space(char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

short int	is_base_valid(char *base)
{
	char	*buff;
	int		base_len;

	base_len = 0;
	while (*base)
	{
		if (*base == 127 || (0 <= *base && *base <= 31)
			|| *base == '+' || *base == '-')
		{
			return (0);
		}
		buff = base + 1;
		while (*buff)
		{
			if (*base == *buff)
			{
				return (0);
			}
			buff++;
		}
		base_len++;
		base++;
	}
	return (2 <= base_len);
}

int	get_index(char *str, char c)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] == c)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

int	ft_atoi_base(char *str, char *base)
{
	char	sign;
	int		integer;
	int		base_len;

	if (!is_base_valid(base))
		return (0);
	while (*str && is_space(*str))
	{
		str++;
	}
	sign = 1;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = ft_strlen(base);
	integer = 0;
	while (*str && get_index(base, *str) != -1)
	{
		integer = integer * base_len + get_index(base, *str);
		str++;
	}
	return (sign * integer);
}
