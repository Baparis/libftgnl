/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:48:11 by baparis           #+#    #+#             */
/*   Updated: 2017/01/12 15:34:52 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	function_has_26_line(char **end, char **start, char **line)
{
	*start = *line;
	*line = ft_strjoin(*start, *end);
	ft_strdel(start);
	ft_strdel(end);
}

int		ft_checkbuf(char *buf, char **line, char **lastbuf)
{
	int		i;
	char	*end;
	char	*start;

	i = 0;
	while ((buf[i] && buf[i] != '\n'))
		i++;
	if (buf[i] == '\n')
	{
		end = ft_strsub(buf, 0, i);
		function_has_26_line(&end, &start, line);
		*lastbuf = NULL;
		*lastbuf = buf + i + 1;
		if (**lastbuf == '\0')
			*lastbuf = NULL;
		return (1);
	}
	start = *line;
	*line = ft_strjoin(start, buf);
	if (**line == '\0' || **line == '\n')
		*line = NULL;
	ft_strdel(&start);
	return (0);
}

int		ft_lastbuf(char **lastbuf, char **line)
{
	int	i;

	i = 0;
	*line = NULL;
	if (!(*lastbuf))
		return (0);
	while ((*lastbuf)[i] && (*lastbuf)[i] != '\n')
		i++;
	if ((*lastbuf)[i] == '\n')
	{
		*line = ft_strsub(*lastbuf, 0, i);
		*lastbuf = *lastbuf + i + 1;
		return (1);
	}
	*line = ft_strdup(*lastbuf);
	if (**line == '\0')
		*line = NULL;
	*lastbuf = NULL;
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*lastbuf;
	char		*buf;
	int			ret;

	if (!line || fd < 0)
		return (-1);
	if ((ft_lastbuf(&lastbuf, line) == 1))
		return (1);
	if ((!(buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1)))))
		return (-1);
	while (((ret = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[ret] = '\0';
		if ((ft_checkbuf(buf, line, &lastbuf)) == 1)
		{
			ft_strdel(&buf);
			return (1);
		}
	}
	ft_strdel(&buf);
	if (ret < 0)
		return (-1);
	if (*line != NULL)
		return (1);
	return (0);
}
