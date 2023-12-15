/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccadoret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:22:09 by ccadoret          #+#    #+#             */
/*   Updated: 2023/10/03 10:22:17 by ccadoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

char	my_func(unsigned int index, char c)
{
	if (index % 2 == 0)
		return ft_toupper(c);
	return c;
}

void	my_func2(unsigned int index, char *c)
{
	if (index == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

int	main(void)
{
	int		arr[10];
	int		arr2[10];
	char	str1[5] = "saint";
	char	str2[5] = "bruh ";
	char	str3[6] = "moment";
	char	buf1[11];
	char	buf2[5];
	char	*str4;
	char	again[15] = "hello my friend";

	printf("my atoi: %d, real atoi: %d\n", ft_atoi("     +25l5"), atoi("      +25l5"));
	printf("ft_strncmp:%d, strcmp:%d\n", ft_strncmp("abcdef", "abc\375xx", 5), 
	strncmp("abcdef", "abc\375xx", 5));
	printf("ft_toupper: %c, toupper: %c\n", ft_toupper('f'), toupper('f'));
	printf("ft_tolower: %c, tolower: %c\n", ft_tolower('F'), tolower('F'));
	printf("ft_isalpha: %d, isalpha: %d\n", ft_isalpha('1'), isalpha('1'));
	printf("ft_isdigit: %d, isdigit: %d\n", ft_isdigit('1'), isdigit('1'));
	printf("ft_isprint: %d, isprint: %d\n", ft_isprint('1'), isprint('1'));
	printf("ft_isascii: %d, isascii: %d\n", ft_isascii('1'), isascii('1'));
	printf("ft_strlcpy: %ld;%s,%s\n", ft_strlcpy(buf1, str2, 5), buf1, str2);
	printf("ft_strlcat: %ld;%s,%s\n", ft_strlcat(buf1, str3, 11), buf1, str3);
	printf("ft_strchr: %s, strchr: %s\n", ft_strchr("teste", 357), strchr("teste", 357));
	printf("ft_strrchr: %s, strrchr: %s\n", ft_strrchr("xteste", 120), strrchr("xteste", 120));
	printf("ft_strnstr: %s\n", ft_strnstr("abcdefgh", "abc", 2));
	printf("ft_memset: %p, arr2: %d, memset: %p, arr: %d\n", ft_memset(arr2, 5, sizeof(arr2)), *arr, memset(arr, 5, sizeof(arr2)), *arr);
	printf("ft_memcpy: %p, buf2: %s ; memcpy: %p, buf2: %s\n", ft_memcpy(buf2, str1, 5), buf2,  memcpy(buf2, str1, 5), buf2);
	ft_bzero(buf2, 5);
	printf("buf2 after ft_bzero: %s\n", buf2);
	str4 = memchr("youpi je suis un bisounours", 'j', 8);
	printf("result: %s\n", str4);
	str4 = ft_memchr("youpi je suis un bisounours", 'j', 8);
	printf("result ft: %s\n", str4);
	printf("ft_memcmp:%d, memcmp:%d\n", ft_memcmp("abc", "abc", 7), 
	memcmp("abc", "abc", 7));
	printf("buf2: %s-end\n", buf2);
	printf("memmove: %p, %s\n", memmove(buf2, str4, 5), buf2);
	ft_bzero(buf2, sizeof(buf2));
	printf("ft_memmove: %p, %s\n", ft_memmove(buf2, str4, 5), buf2);
	printf("ft_strjoin: %s\n", ft_strjoin("s", ""));
	printf("ft_itoa: %s\n", ft_itoa(-2147483648));
	printf("ft_strtrim: |%s|\n", ft_strtrim("", ""));
	str4 = ft_strmapi("bonjour 007", my_func);
	printf("strmapi: %s\n", str4);
	free(str4);
	ft_striteri(again, my_func2);
	printf("striteri: %s\n", again);
	return (0);
}
