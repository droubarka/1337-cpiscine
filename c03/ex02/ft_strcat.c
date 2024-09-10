/*
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

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;

	buff = dest + ft_strlen(dest);
	while (*src)
	{
		*buff++ = *src++;
	}
	*buff = '\0';
	return (dest);
}
*/

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;

	buff = dest;
	while (*buff)
	{
		buff++;
	}
	while (*src)
	{
		*buff++ = *src++;
	}
	*buff = '\0';
	return (dest);
}
