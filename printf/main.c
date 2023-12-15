/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:35:04 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/21 13:35:05 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("=========Test 1=========\nattendu: %d, %d\n", 42, (int)(-2147483648));
	ft_printf("ft: %d, %d\n", 42, (int)(-2147483648));
	printf("=========Test 2=========\nattendu: %s\n", "Hello");
	ft_printf("ft: %s, cas sup: %s\n", "Hello", NULL);
	printf("=========Test 3=========\nattendu: %c\n", 'c');
	ft_printf("ft: %c\n", 'c');
	printf("=========Test 4=========\nattendu: %x, %x\n", 42, (unsigned int)(-2147483648));
	ft_printf("ft: %x, %x\n", 42, (unsigned int)(-2147483648));
	printf("=========Test 5=========\nattendu: %X\n", 42);
	ft_printf("ft: %X\n", 42);
	printf("=========Test 6=========\nattendu: %i, %i\n", 42, -4);
	ft_printf("ft: %i, %i\n", 42, -4);
	printf("=========Test 7=========\nattendu: %p, %p, %p\n", "c", "bruh", NULL);
	ft_printf("ft: %p, %p, %p\n", "c", "bruh", 0);
	printf("=========Test 8=========\nattendu: %%, %%\n");
	ft_printf("ft: %%, %%\n");
	//printf("====GESTION D'ERREUR====");
	//ft_printf("string: %s", 14);
	printf("test renvoi printf: %i\n", printf("what %s fuck %i\n", "the", 0));
	ft_printf("test renvoi ft_printf: %i\n", ft_printf("what %s fuck %i\n", "the", 0));
	printf("test renvoi printf: %i\n", printf("Hello %s ! %i %c\n", "World", 1245, '!'));
	ft_printf("test renvoi ft_printf: %i\n", ft_printf("Hello %s ! %i %c\n", "World", 1245, '!'));
	return (0);
}
