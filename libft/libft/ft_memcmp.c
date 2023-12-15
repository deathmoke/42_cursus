/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:36:19 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/05 11:36:21 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temps1;
	unsigned char	*temps2;

	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (temps1[i] && temps2[i] && i < n - 1)
	{
		if (temps1[i] - temps2[i] > 0)
			return (1);
		if (temps1[i] - temps2[i] < 0)
			return (-1);
		i++;
	}
	if (temps1[i] - temps2[i] > 0)
		return (1);
	else if (temps1[i] - temps2[i] < 0)
		return (-1);
	else
		return (0);
}
