#include "libft.h"

void	rec(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		rec(-n, fd);
	}
	else
	{
		rec(n, fd);
	}
}

void	rec(int n, int fd)
{
	char	c;

	if (n > 9)
	{
		rec(n / 10, fd);
		rec(n % 10, fd);
	}
	else
	{
		c = (char)n + '0';
		ft_putchar_fd(c, fd);
	}
}
