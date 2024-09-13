#include <unistd.h>

short int	is_non_printable(char c)
{
	return (c == 127 || (0 <= c && c <= 31));
}

short int	is_asign(char c)
{
	return (c == '+' || c == '-');
}

short int	is_base_valid(char *base)
{
	char	*buff;
	int		base_len;

	base_len = 0;
	while (*base)
	{
		if (is_non_printable(*base) || is_asign(*base))
		{
			return (0);
		}
		buff = base + 1;
		while (*buff)
		{
			if (*base == *buff)
			{
				return (0);
			}
			buff++;
		}
		base_len++;
		base++;
	}
	return (2 <= base_len);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		if (nbr < 0)
		{
			ft_putnbr_base(-(nbr / base_len), base);
			nbr = -(nbr % base_len);
		}
	}
	if (base_len <= nbr)
	{
		ft_putnbr_base(nbr / base_len, base);
		nbr %= base_len;
	}
	write(1, &base[nbr], 1);
}
