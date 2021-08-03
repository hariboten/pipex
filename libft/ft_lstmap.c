/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 12:21:23 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 15:33:38 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*nlptr;

	if (!lst || !f)
		return (NULL);
	if (!(newlst = ft_lstnew((*f)(lst->content))))
	{
		ft_lstclear(&newlst, del);
		return (NULL);
	}
	nlptr = newlst;
	while (lst->next)
	{
		if (!(nlptr->next = ft_lstnew((*f)(lst->next->content))))
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
		nlptr = nlptr->next;
	}
	return (newlst);
}
