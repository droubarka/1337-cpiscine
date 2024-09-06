#include <unistd.h>

char	*g_base = "0123456789abcdef";

void	putchar_hex(unsigned char c)
{
	char	hex[2];

	hex[0] = g_base[c / 16];
	hex[1] = g_base[c % 16];
	write(1, hex, 2);
}

void	putaddr(void *addr)
{
	unsigned long	ulong_addr;
	unsigned int	idx;

	ulong_addr = (unsigned long) addr;
	idx = 0;
	while (idx < 16)
	{
		write(1, &g_base[ulong_addr >> 60], 1);
		ulong_addr <<= 4;
		idx++;
	}
}

void	putdata(unsigned char *data, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	while (idx < size)
	{
		if (31 < data[idx] && data[idx] < 127)
			write(1, &data[idx], 1);
		else
			write(1, ".", 1);
		idx++;
	}
}

void	putrow(void *addr, unsigned int size, unsigned int col_size)
{
	unsigned char	*data;
	unsigned int	idx;

	data = (unsigned char *) addr;
	putaddr(addr);
	write(1, ": ", 2);
	idx = 0;
	while (idx < size)
	{
		putchar_hex(data[idx]);
		if (idx % 2)
			write(1, " ", 1);
		idx++;
	}
	while (idx < col_size)
		write(1, "   ", 2 + (idx++ % 2));
	putdata(data, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	col_size;
	unsigned int	chunk_size;
	unsigned int	idx;

	col_size = 16;
	chunk_size = col_size;
	idx = 0;
	while (idx < size)
	{
		if (size <= idx + col_size)
			chunk_size = size - idx;
		putrow(addr + idx, chunk_size, col_size);
		idx += col_size;
	}
	return (addr);
}
