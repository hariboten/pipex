/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:25:02 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 13:11:05 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newlst)
{
	if (!*lst)
	{
		*lst = newlst;
		return ;
	}
	if (!newlst)
		return ;
	newlst->next = *lst;
	*lst = newlst;
	return ;
}
