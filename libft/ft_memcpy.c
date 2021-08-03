/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:49:03 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 14:43:39 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned	char	*dptr;
	unsigned	char	*sptr;

	if (dest == src)
		return (dest);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	while (len--)
		*dptr++ = *sptr++;
	return (dest);
}
