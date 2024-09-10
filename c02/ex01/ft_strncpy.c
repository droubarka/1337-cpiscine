/*
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*buff;

	buff = dest;
	while (0 < n-- && *src)
	{
		*buff++ = *src++;
	}
	while (0 < n--)
		*buff++ = '\0';
	return (dest);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (idx < n && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
		dest[idx++] = '\0';
	return (dest);
}
