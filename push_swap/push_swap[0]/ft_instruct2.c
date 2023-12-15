/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruct2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:17:51 by ccadoret          #+#    #+#             */
/*   Updated: 2023/11/21 15:17:55 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	rotate(t_pile *pile, int dir, char cond)
{
	int	tmp;
	int	i;

	if (pile->size == 0)
		return ;
	if (dir >= 0)
	{
		tmp = pile->pile[pile->size - 1];
		i = pile->size;
		while (--i > 0)
			pile->pile[i] = pile->pile[i - 1];
		pile->pile[0] = tmp;
		if (cond != '\0')
			ft_printf("rr%c\n", pile->name);
	}
	else
	{
		tmp = pile->pile[0];
		i = -1;
		while (++i < pile->size - 1)
			pile->pile[i] = pile->pile[i + 1];
		pile->pile[i] = tmp;
		if (cond != '\0')
			ft_printf("r%c\n", pile->name);
	}
}

void	rotate2(t_pile *pile_1, t_pile *pile_2, int dir)
{
	rotate(pile_1, dir, '\0');
	rotate(pile_2, dir, '\0');
	ft_printf("rr");
}

int	control(char **tab_str)
{
	int	i;

	i = 0;
	while (tab_str[i])
	{
		if (tab_str[i][0] == '-')
		{
			if (!verif_min(tab_str[i]))
				return (0);
		}
		else
		{
			if (!verif_max(tab_str[i]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	verif_min(char *str)
{
	int		i;
	int		len;
	char	*MIN;

	i = 0;
	MIN = "-2147483648";
	len = ft_strlen(str);
	if (len > 11)
		return (0);
	else
	{
		while (str[++i])
		{
			if (!ft_isdigit(str[i]))
				return (0);
			if (len == 11)
				if (str[i] > MIN[i] || MIN[i] == '\0')
					return (0);
		}
	}
	return (1);
}

int	verif_max(char *str)
{
	int		i;
	int		len;
	char	*MAX;

	i = 0;
	MAX = "2147483648";
	len = ft_strlen(str);
	if (len > 10)
		return (0);
	else
	{
		while (str[i])
		{
			if (!ft_isdigit(str[i]))
				return (0);
			if (len == 10)
				if (str[i] > MAX[i] || MAX[i] == '\0')
					return (0);
			i++;
		}
	}
	return (1);
}

int	verif_doublons(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
