#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*cnt;

	if (!lst)
		return ;
	while (*lst)
	{
		cnt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cnt;
	}
}
