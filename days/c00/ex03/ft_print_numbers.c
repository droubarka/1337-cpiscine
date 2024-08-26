#include <unistd.h>

void	ft_print_numbers(void)
{
	char	current_digit;

	current_digit = '0';
	while (current_digit <= '9')
	{
		write(1, &current_digit, 1);
		current_digit++;
	}
}
