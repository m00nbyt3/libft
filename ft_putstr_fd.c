#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	size;

	if (s && fd)
	{
		size = ft_strlen(s);
		write (fd, s, size);
	}
}
