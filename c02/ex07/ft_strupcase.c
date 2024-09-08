/*
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
*/

char	*ft_strupcase(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if ('a' <= *buff && *buff <= 'z')
			*buff -= 32;
		buff++;
	}
	return (str);
}
