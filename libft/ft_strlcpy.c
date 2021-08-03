/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:15:51 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 16:57:05 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t tmp;

	tmp = ft_strlen(src);
	if (destsize == 0)
		return (tmp);
	while (--destsize)
	{
		*dest++ = *src;
		if (!(*src))
			break ;
		src++;
	}
	if (!destsize)
		*dest = 0;
	return (tmp);
}
