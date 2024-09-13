#include <unistd.h>

int	main(int argc, char **argv)
{
	char	**buff;

	while (--argc)
	{
		buff = argv + argc;
		while (**buff)
		{
			write(1, (*buff)++, 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
