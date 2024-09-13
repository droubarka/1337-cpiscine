short int	is_space(char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

short int	is_asign(char c)
{
	return (c == '+' || c == '-');
}

short int	is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(char *str)
{
	char	sign;
	int		integer;

	while (is_space(*str))
	{
		str++;
	}
	sign = 1;
	while (is_asign(*str))
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	integer = 0;
	while (is_digit(*str))
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
	return (sign * integer);
}
