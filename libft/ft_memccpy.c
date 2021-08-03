/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:55:49 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 16:42:10 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned	char	*dptr;
	unsigned	char	*sptr;
	unsigned	char	ch;

	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	ch = c;
	while (len--)
		if ((*dptr++ = *sptr++) == ch)
			return (dptr);
	return (NULL);
}
