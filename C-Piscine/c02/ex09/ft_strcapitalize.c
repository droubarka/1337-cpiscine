int	is_uppercase(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	is_lowercase(char c)
{
	return ('a' <= c && c <= 'z');
}

int	is_alnum(char c)
{
	return (('0' <= c && c <= '9') || is_uppercase(c) || is_lowercase(c));
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	is_cap_allowed;
	unsigned int	idx;

	is_cap_allowed = 1;
	idx = 0;
	while (str[idx])
	{
		if (is_cap_allowed)
		{
			if (is_lowercase(str[idx]))
				str[idx] -= 32;
		}
		else
		{
			if (is_uppercase(str[idx]))
				str[idx] += 32;
		}
		is_cap_allowed = !is_alnum(str[idx]);
		idx++;
	}
	return (str);
}
