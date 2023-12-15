/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:58:20 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/05 13:58:51 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size_tot;
	void	*ptr;

	size_tot = nmemb * size;
	ptr = (void *)malloc(size_tot);
	if (ptr != NULL)
		ft_memset(ptr, 0, size_tot);
	return (ptr);
}
