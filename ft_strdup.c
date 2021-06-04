#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		tam;

	tam = ft_strlen(s1) + 1;
	str = malloc(tam);
	if (!str)
		return (0);
	return (ft_memcpy(str, s1, tam));
}
