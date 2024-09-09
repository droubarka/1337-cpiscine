/*
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
*/

char	*ft_strlowcase(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if ('A' <= *buff && *buff <= 'Z')
			*buff += 32;
		buff++;
	}
	return (str);
}
