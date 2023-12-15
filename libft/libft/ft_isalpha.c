/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:15:01 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/02 14:17:35 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{	
	if (argc == 1)
		return (1);
	while (*argv[1])
	{
		if (ft_isalpha(*argv[1]))
			write(1, "OK", 2);
		else
			write(1, "NO", 2);
		argv[1]++;
	}
	return (0);
}*/