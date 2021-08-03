/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 00:50:40 by ewatanab          #+#    #+#             */
/*   Updated: 2020/09/24 17:15:59 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sub(char **line, char **reserve, char *nlptr, int ret)
{
	if (ret <= 0)
	{
		reserve = NULL;
		return (ret);
	}
	if (!(*reserve = ft_strdup(nlptr + 1)))
	{
		free(*line);
		*line = NULL;
		return (-1);
	}
	if (!(nlptr = ft_substr(*line, 0, nlptr - *line)))
	{
		free(*reserve);
		*reserve = NULL;
		return (-1);
	}
	free(*line);
	*line = nlptr;
	return (1);
}

int			get_next_line(int fd, char **line)
{
	static char	*reserve[FD_MAX + 1];
	char		*nlptr;
	char		*tmp;
	char		buf[BUFFER_SIZE + 1];
	int			ret;

	if (!line || read(fd, buf, 0) < 0 || fd > FD_MAX)
		return (-1);
	*line = reserve[fd];
	if (!*line)
		*line = ft_strdup("");
	ret = 1;
	while (!(nlptr = ft_strchr(*line, '\n')))
	{
		if ((ret = read(fd, buf, BUFFER_SIZE)) <= 0)
			break ;
		buf[ret] = '\0';
		tmp = ft_strjoin(*line, buf);
		free(*line);
		*line = tmp;
		if (!tmp)
			return (-1);
	}
	return (sub(line, &reserve[fd], nlptr, ret));
}
