#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	void	*tmp;

	tmp = 0;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
