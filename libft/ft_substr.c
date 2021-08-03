/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 21:58:53 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/22 22:19:31 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	char	*tmp;

	if (!(buf = (char *)malloc(len + 1)))
		return (NULL);
	*buf = 0;
	if (start > ft_strlen(s))
		return (buf);
	if (len == 0)
		return (buf);
	s += start;
	tmp = buf;
	while (len-- && *s)
		*tmp++ = *s++;
	*tmp = 0;
	return (buf);
}
