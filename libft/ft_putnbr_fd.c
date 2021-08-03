/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:57:31 by ewatanab          #+#    #+#             */
/*   Updated: 2020/06/23 15:35:55 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	sub_putnbr_fd(long long ln, int fd)
{
	if (ln == 0)
		return ;
	sub_putnbr_fd(ln / 10, fd);
	ft_putchar_fd((char)(ln % 10) + '0', fd);
	return ;
}

void			ft_putnbr_fd(int n, int fd)
{
	long	long	ln;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar_fd('-', fd);
	}
	sub_putnbr_fd(ln, fd);
	return ;
}
