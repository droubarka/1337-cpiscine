#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current_char;

	current_char = 'z';
	while ('a' <= current_char)
	{
		write(1, &current_char, 1);
		current_char--;
	}
}
