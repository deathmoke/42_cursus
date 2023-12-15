/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:00:11 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/04 11:00:15 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temps;

	temps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		temps[i] = c;
		i++;
	}
	s = temps;
	return (s);
}
