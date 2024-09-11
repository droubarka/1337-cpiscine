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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	nb;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	dest += dst_len;
	nb = size - dst_len - 1;
	while (nb-- && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dst_len + src_len);
}
