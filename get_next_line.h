/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:28:38 by baparis           #+#    #+#             */
/*   Updated: 2017/01/12 15:25:58 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 17

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
