/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:08:16 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/25 11:28:40 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelif(t_list **begin_list, void (*del)(), int (*cmp)(), void *key)
{
	t_list	*prev;
	t_list	*now;
	t_list	*next;

	prev = NULL;
	now = *begin_list;
	while (now)
	{
		next = now->next;
		if (!cmp(now->content, key))
		{
			ft_lstdelone(now, del);
			now = next;
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
		}
		else
		{
			prev = now;
			now = next;
		}
	}
}

void	ft_lstdelifb(t_list **begin_list, void (*del)(), bool (*cmp)(), void *key)
{
	t_list	*prev;
	t_list	*now;
	t_list	*next;

	prev = NULL;
	now = *begin_list;
	while (now)
	{
		next = now->next;
		if (cmp(now->content, key))
		{
			ft_lstdelone(now, del);
			now = next;
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
		}
		else
		{
			prev = now;
			now = next;
		}
	}
}
