/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 22:24:16 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 15:08:21 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sub_len;
	char	*substr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	sub_len = ft_strlen(s1);
	while (sub_len && ft_strchr(set, s1[sub_len]))
		sub_len--;
	substr = ft_substr((char *)s1, 0, sub_len + 1);
	return (substr);
}
