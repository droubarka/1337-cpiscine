/* !!! NOT FINISHED YET !!!
*/
#include <unistd.h>
#include <stdio.h>

char	*g_base = "0123456789abcdef";

short int	is_printable(char c)
{
	return (31 < c && c < 127);
}

void	putchar_hex(unsigned char c)
{
	char hex[3];

	hex[0] = g_base[c / 16];
	hex[1] = g_base[c % 16];
	write(1, hex, 2);
}

void	putaddr(void *addr)
{
	short int	idx;
	unsigned long	ulong_addr;

	ulong_addr = (unsigned long) addr;
	idx = 0;
	while (idx < 16)
	{
		write(1, &g_base[(ulong_addr >> 60) & 0xf], 1);
		ulong_addr <<= 4;
		idx++;
	}

}



void	putrow(void *addr, unsigned int size)
{
	unsigned int	idx;
	char	*data;

	putaddr(addr);
	write(1, ": ", 2);

	data = (char *) addr;
	idx = 0;
	while (idx < size)
	{
		putchar_hex(data[idx]);
		idx++;
	}

	write(1, " ", 1);
	idx = 0;
	while (idx < size)
	{
		if (is_printable(data[idx]))
			write(1, &data[idx], 1);
		else
			write(1, ".", 1);
		idx++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	idx;
	unsigned int	nrows;

	unsigned int rsz = 16;

	nrows = ((-size) % rsz + size) / rsz; // rsz !?

	idx = 0;
	while (idx < nrows)
	{
		putrow(idx * rsz + addr, rsz);
		idx++;
	}
	return (addr);
}

#include <string.h>
int	main(void)
{
	char	addr[] = "hello world random tXt blaa blaa blaa";
	strcat(addr, (char[]) {127,'0','0',1});
	strcat(addr, ":1337 local.");

	ft_print_memory(addr, 30);
}
