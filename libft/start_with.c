/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_with.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:32:21 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/24 18:12:57 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	start_with(const char *str, const char *find)
{
	size_t	find_len;

	if (!str || !find)
		return (false);
	find_len = ft_strlen(find);
	if (ft_strlen(str) < find_len)
		return (false);
	if (ft_strncmp(str, find, find_len))
		return (false);
	return (true);
}

bool	end_with(const char *str, const char *find)
{
	size_t	find_len;
	size_t	str_len;

	if (!str || !find)
		return (false);
	find_len = ft_strlen(find);
	str_len = ft_strlen(str);
	if (str_len < find_len)
		return (false);
	if (ft_strncmp(str + str_len - find_len, find, find_len))
		return (false);
	return (true);
}
