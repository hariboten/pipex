/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 21:48:47 by ewatanab          #+#    #+#             */
/*   Updated: 2020/07/17 11:39:51 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**rec(char const *s, char c, int i)
{
	char const	*ptr;
	char		**container;

	while (*s == c)
		s++;
	if (!*s)
	{
		if (!(container = malloc((i + 1) * sizeof(char *))))
			return (NULL);
		container[i] = NULL;
		return (container);
	}
	ptr = s;
	while (*s && *s != c)
		s++;
	if (!(ptr = ft_substr(ptr, 0, s - ptr)))
		return (NULL);
	if (!(container = rec(s, c, i + 1)))
	{
		free((void *)ptr);
		return (NULL);
	}
	container[i] = (char *)ptr;
	return (container);
}

char		**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (rec(s, c, 0));
}
