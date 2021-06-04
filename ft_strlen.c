#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		s++;
		size++;
	}
	return (size);
}
