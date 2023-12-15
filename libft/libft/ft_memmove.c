/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:03:19 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/06 11:03:23 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;
	size_t				i;

	tempdest = (unsigned char *)dest;
	tempsrc = (const unsigned char *)src;
	if (tempdest < tempsrc)
	{
		i = 0;
		while (i < n)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
	}
	else if (tempdest > tempsrc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			tempdest[i] = tempsrc[i];
		}
	}
	return (dest);
}
