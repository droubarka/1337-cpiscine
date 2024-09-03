unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	while (idx + 1 < size && str[idx])
	{
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = '\0';
	while (str[idx])
		idx++;
	return (idx);
}
