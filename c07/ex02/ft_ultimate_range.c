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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range != NULL)
	{
		return (max - min);
	}
	return (-1);
}
