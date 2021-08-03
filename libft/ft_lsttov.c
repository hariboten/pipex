/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execvp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:43:03 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/27 13:20:36 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lsttov(t_list *lst)
{
	int		len;
	void	**vec;
	void	**ret;

	len = ft_lstsize(lst);
	if (!(vec = malloc(sizeof(void **) * (len + 1))))
		return (NULL);
	ret = vec;
	while (lst)
	{
		*vec++ = lst->content;
		lst = lst->next;
	}
	*vec = NULL;
	return (ret);
}

void	ft_lstvclear(void **lst)
{
	void	**tmp;

	tmp = lst;
	while (*lst)
		free(*lst++);
	free(tmp);
}
