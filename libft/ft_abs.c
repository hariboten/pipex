/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:35:24 by ewatanab          #+#    #+#             */
/*   Updated: 2020/08/05 10:30:00 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

long		ft_labs(long a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

long long	ft_llabs(long long a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

double		ft_fabs(double a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}
