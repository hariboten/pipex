/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:16:25 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/22 17:51:56 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	char	*p;
	char	*p_end;
	size_t	substr_len;

	p = (char *)str;
	substr_len = ft_strlen(substr);
	p_end = (char *)str + n - (substr_len - 1);
	if (substr_len == 0)
		return ((char *)str);
	while (p < p_end)
	{
		if (ft_strncmp(p, substr, substr_len) == 0)
			return (p);
		p++;
	}
	return (NULL);
}
