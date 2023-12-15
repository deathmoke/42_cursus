/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:09:17 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/08 12:09:21 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		n;
	char	*s2;

	n = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	while (ft_inset(s1[n], set) && s1[n])
		n--;
	while (ft_inset(s1[i], set) && s1[n])
		i++;
	s2 = (char *)malloc((n - i + 2) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i <= n)
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
