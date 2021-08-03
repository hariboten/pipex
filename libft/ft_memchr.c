/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:33:14 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 16:41:31 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned	char	*tmp;
	unsigned	char	ch;

	tmp = (unsigned char *)s;
	ch = c;
	while (len--)
	{
		if (*tmp == ch)
			return (tmp);
		tmp++;
	}
	return (NULL);
}
