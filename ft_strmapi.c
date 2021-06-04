#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			size;
	unsigned int	i;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < size && str)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
