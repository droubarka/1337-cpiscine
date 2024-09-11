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

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (size <= dst_len)
		return (size + src_len);
	dest += dst_len;
	while (1 < size-- - dst_len && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dst_len + src_len);
}

char	*comment = "I HAVE QUESTIONS!?"
