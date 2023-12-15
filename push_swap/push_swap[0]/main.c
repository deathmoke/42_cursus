/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:59:57 by ccadoret          #+#    #+#             */
/*   Updated: 2023/11/21 16:00:00 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int	init(t_pile *pile_a, t_pile *pile_b, int ac, char **av)
{
	int		i;

	i = 0;
	pile_a->pile = (int *)malloc(ac * sizeof(int));
	pile_b->pile = (int *)malloc(1);
	while (av[i])
	{
		pile_a->pile[i] = ft_atoi(av[i]);
		i++;
	}
	if (!verif_doublons(pile_a->pile))
	{
		free(pile_a->pile);
		free(pile_b->pile);
		ft_printf("Error\n");
		return (0);
	}
	pile_a->size = i;
	pile_b->size = 0;
	pile_a->name = 'a';
	pile_b->name = 'b';
	return (1);
}

int	main(int argc, char **argv)
{
	t_pile	pile_a;
	t_pile	pile_b;
	int	i;
	char	**tab;

	if (argc == 1)
		return (1);
	if (argc == 2)
		tab = ft_split(argv[1], " \n");
	else
		tab = (argv + 1);
	if (!control(tab))
	{
		ft_printf("Error\n");
		return (1);
	}
	if (!init(&pile_a, &pile_b, argc - 1, tab))
		return (1);
	i = -1;
	while (pile_a.pile[++i])
		ft_printf("%d; ", pile_a.pile[i]);
	ft_printf("\n");
	i = -1;
	push_swap(&pile_a, &pile_b);
	while (pile_a.pile[++i])
		ft_printf("%d, ", pile_a.pile[i]);
	ft_printf("\n");
	ft_printf("size_a: %d\n", pile_a.size);
	ft_printf("size_b: %d\n", pile_b.size);
	free(pile_a.pile);
	free(pile_b.pile);
	return (0);
}
