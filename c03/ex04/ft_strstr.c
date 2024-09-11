/*
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	idx;

	if (!*to_find)
		return (str);
	while (*str)
	{
		idx = 0;
		while (to_find[idx])
		{
			if (*(str + idx) != to_find[idx])
				break ;
			idx++;
		}
		if (!to_find[idx])
			return (str);
		str++;
	}
	return (0);
}
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s_idx;
	unsigned int	f_idx;
	unsigned int	d_len;

	if (!*to_find)
		return (str);
	if (ft_strlen(to_find) <= ft_strlen(str))
	{
		d_len = ft_strlen(str) - ft_strlen(to_find);
		s_idx = 0;
		while (s_idx <= d_len && str[s_idx])
		{
			f_idx = 0;
			while (to_find[f_idx])
			{
				if (str[s_idx + f_idx] != to_find[f_idx])
					break ;
				f_idx++;
			}
			if (!to_find[f_idx])
				return (str + s_idx);
			s_idx++;
		}
	}
	return (0);
}
