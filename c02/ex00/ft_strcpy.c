/*
char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*buff;

	buff = dest;
	while (*src)
	{
		*buff++ = *src++;
	}
	*buff = '\0';
	return (dest);
}
