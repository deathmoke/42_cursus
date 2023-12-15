/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:19:33 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/11 15:38:25 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (src[src_len])
		{
			src_len++;
		}
		i = 0;
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int main(void)
{
	char	src[] = "Hello my friend!";
	char	dest[10];
	ft_strlcpy(dest, src, sizeof(dest));
	write(1, dest, 10);
}*/
