#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr_start;

	ptr_start = *lst;
	while (*(lst)->next)
	{
		(del)(*(lst)->content);
		*(lst) = *(lst)->next;
	}
	*(lst) = ptr_start;
	while (ptr_start)
	{
		ptr_start = *(lst)->next;
		free (*(lst));
	}
}
