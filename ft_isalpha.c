#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'a' || c > 'z')
	{
		if (c < 'A' || c > 'Z')
			return (0);
	}
	return (1);
}
