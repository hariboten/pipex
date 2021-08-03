/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:43:32 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/25 11:17:43 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfindb(t_list *lst, bool cmp(), void *key)
{
	while (lst)
	{
		if (cmp(lst->content, key))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

t_list	*ft_lstfind(t_list *lst, int cmp(), void *key)
{
	while (lst)
	{
		if (!cmp(lst->content, key))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
