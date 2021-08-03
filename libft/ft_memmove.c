/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:16:13 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 16:46:49 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned	char	*dptr;
	unsigned	char	*sptr;
	unsigned	char	*t;

	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	if (len == 0)
		return (dest);
	if (dptr < sptr)
	{
		t = sptr + len;
		while (sptr != t)
			*dptr++ = *sptr++;
	}
	else if (dptr > sptr)
	{
		t = sptr;
		sptr += len;
		dptr += len;
		while (sptr != t)
			*--dptr = *--sptr;
	}
	return (dest);
}
