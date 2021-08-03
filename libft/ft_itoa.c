/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:19:29 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/24 15:30:12 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		sub_len(long long n)
{
	int len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	char	*sub_itoa(long long n, char *nptr)
{
	if (n == 0)
	{
		*nptr = 0;
		return (nptr);
	}
	nptr = sub_itoa(n / 10, nptr);
	*nptr = n % 10 + '0';
	return (nptr + 1);
}

char			*ft_itoa(int n)
{
	char	*nptr;
	char	*tmp;

	if (!(nptr = (char *)malloc(sub_len(n) + 1)))
		return (NULL);
	if (n == 0)
	{
		*nptr = '0';
		tmp = nptr + 1;
	}
	else if (n < 0)
	{
		*nptr = '-';
		tmp = sub_itoa((long long)n * (long long)-1, nptr + 1);
	}
	else
		tmp = sub_itoa(n, nptr);
	*tmp = 0;
	return (nptr);
}
