#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = -1;
	while (++i < n)
		str[i] = 0;
}
