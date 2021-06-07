#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*set;

	if (!lst || !f)
		return (0);
	new = 0;
	while (lst)
	{
		set = ft_lstnew(f(lst->content));
		if (!set)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, set);
		lst = lst->next;
	}
	return (new);
}
