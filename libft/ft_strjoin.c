/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 22:17:30 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/11 15:00:52 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	char	*tmp;

	if (!(buf = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	tmp = buf;
	while ((*tmp++ = *s1++))
		;
	tmp--;
	while ((*tmp++ = *s2++))
		;
	return (buf);
}

char	*ft_strjoin_tr(char *s1, char *s2)
{
	char	*join;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	join = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (join);
}
