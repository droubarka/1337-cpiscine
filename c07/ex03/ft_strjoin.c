#include <stdlib.h>

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

unsigned int	strslen(char **strs, int size)
{
	unsigned int	length;

	length = 0;
	while (size--)
	{
		length += ft_strlen(strs[size]);
	}
	return (length);
}

char	*strxcat(char *dest, char *src)
{
	dest += ft_strlen(dest);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*buff;

	if (size == 0 || strs == NULL)
		return ((char *) malloc(sizeof(char)));
	str = (char *) malloc((size - 1) * ft_strlen(sep) + strslen(strs, size));
	if (str != NULL)
	{
		buff = str;
		buff[0] = '\0';
		while (size--)
		{
			buff = strxcat(buff, *strs++);
			if (size)
			{
				buff = strxcat(buff, sep);
			}
		}
	}
	return (str);
}
