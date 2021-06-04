#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	if (!(*needle))
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (len > 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			if (!ft_strncmp(haystack, needle, size))
			{
				if (len >= size)
					return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (0);
}
