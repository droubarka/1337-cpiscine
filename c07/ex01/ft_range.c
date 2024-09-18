#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*buff;

	if (min < max)
	{
		range = (int *) malloc(sizeof(int) * (max - min));
		if (range != NULL)
		{
			buff = range;
			while (min < max)
			{
				*buff++ = min++;
			}
			return (range);
		}
	}
	return (NULL);
}
