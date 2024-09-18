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

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
}

char	*ft_strdup(char *str)
{
	char	*dup;

	dup = (char *) malloc(ft_strlen(str) + 1);
	if (dup != NULL)
		ft_strcpy(dup, str);
	return (dup);
}
