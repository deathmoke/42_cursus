/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:17:57 by ccadoret          #+#    #+#             */
/*   Updated: 2023/11/21 15:18:00 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int	push_swap(t_pile *pile_a, t_pile *pile_b)
{
	if (particular(pile_a, find_max))
		return (0);
	push_swap_init(pile_a, pile_b);
	push_swap_tri(pile_a, pile_b, find_max);
	push_swap_tri(pile_b, pile_a, find_min);
	while (pile_b->size > 0)
		push_pile(pile_b, pile_a);
	return (0);
}
int	push_swap_tri(t_pile *pile_a, t_pile *pile_b, int (*f)(int *tab, int size))
{
	int	ind;
	int	size_div;

	size_div = pile_a->size + 1;
	if (verif_tri(pile_a) && pile_b->size == 0)
		return (1);
	while (pile_a->size > 3)
	{
		ind = f(pile_a->pile, pile_a->size);
		if (ind < pile_a->size / 2)
		{
			while (--ind >= 0)
				rotate(pile_a, -1, 'a');
		}
		else
		{
			while (++ind < pile_a->size + 1)
				rotate(pile_a, 1, 'a');
		}
		push_pile(pile_a, pile_b);
	}
	size_div -= particular(pile_a, f);
	while (--size_div > 0)
		push_pile(pile_b, pile_a);
	return (1);
}

//faire un push_swap qui combine les deux

void	push_swap_init(t_pile *pile_a, t_pile *pile_b)
{
	int	i;
	int	med;

	med = find_med(pile_a->pile, pile_a->size);
	i = 0;
	while (i < pile_a->size)
	{
		if (pile_a->pile[0] < med)
			push_pile(pile_a, pile_b);
		else
			rotate(pile_a, 1, 'a');
		i++;
	}
}

int	particular(t_pile *pile, int (*f)(int *tab, int size))
{
	if (pile->size <= 3)
	{
		if (pile->size == 1)
			return (1);
		else if (pile->size == 2)
		{
			if (f(pile->pile, pile->size) != 0)
				return (2);
			else
			{
				swap_head(pile);
				return (2);
			}
		}
		else if (pile->size == 3)
		{
			if (f(pile->pile, pile->size) == 1)
				rotate(pile, 1, 'a');
			else if (f(pile->pile, pile->size) == 0)
				rotate(pile, -1, 'a');
			if (find_med(pile->pile, pile->size) != pile->pile[1])
				swap_head(pile);
			return (3);
		}
	}
	return (0);
}

int	verif_tri(t_pile *pile)
{
	int	i;

	i = 1;
	if (pile->size == 0)
		return (0);
	while (pile->pile[i])
	{
		if (pile->pile[i] < pile->pile[i - 1])
			return (0);
		i++;
	}
	return (1);
}
