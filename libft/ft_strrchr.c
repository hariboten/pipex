/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:07:28 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/22 17:10:40 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned	char	ch;
	const		char	*ptr;

	ch = c;
	ptr = NULL;
	while (*s)
	{
		if (*s == ch)
			ptr = s;
		s++;
	}
	if (*s == ch)
		ptr = s;
	return ((char *)ptr);
}
