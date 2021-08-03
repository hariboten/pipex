/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:07:29 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/22 19:31:35 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	char	*ptr;
	int		len;

	len = ft_strlen(str);
	if (!(dup = malloc(len + 1)))
		return (NULL);
	ptr = dup;
	while ((*ptr++ = *str++))
		;
	return (dup);
}
