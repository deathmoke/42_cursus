/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:07:06 by ccadoret          #+#    #+#             */
/*   Updated: 2023/11/07 15:35:09 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 1

# endif

# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin_spe(char *s1, char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_strchr_spe(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlcpy(char *dst, char const *src, int size);

#endif
