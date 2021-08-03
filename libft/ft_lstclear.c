/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:09:29 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 11:37:31 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	sub_lstclear(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		sub_lstclear(lst->next, del);
	ft_lstdelone(lst, del);
	return ;
}

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (*lst)
		sub_lstclear(*lst, del);
	*lst = NULL;
	return ;
}
