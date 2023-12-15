/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:18:08 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/04 15:18:16 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temps;
	size_t			i;

	i = 0;
	temps = (unsigned char *)s;
	while (i < n)
	{
		if (*temps == (unsigned char)c)
			return (temps);
		temps++;
		i++;
	}
	return (NULL);
}
