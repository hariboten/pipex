/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:04:36 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 17:04:18 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned	char	*ptr;
	unsigned	char	ch;

	ptr = (unsigned char *)dest;
	ch = c;
	while (len--)
		*ptr++ = ch;
	return (dest);
}
