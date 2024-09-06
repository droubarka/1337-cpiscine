unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	while (idx + 1 < size && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	while (src[idx])
		idx++;
	return (idx);
}
