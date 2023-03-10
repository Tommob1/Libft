/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:28:45 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/10 13:23:45 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"

int main (void)
{
	printf("\nLibft Tests (Return 1 = TRUE, Return 0 = FALSE): \n");

	//ft_isalpha() tests:
	printf("\nisalpha test 1: 'A' = %d", ft_isalpha('A'));
	printf("\nisalpha test 2: 'a' = %d", ft_isalpha('a'));
	printf("\nisalpha test 3: '1' = %d\n", ft_isalpha('1'));

	//ft_isdigit() tests:
	printf("\nisdigit test 1: 'A' = %d", ft_isdigit('A'));
	printf("\nisdigit test 2: '5' = %d", ft_isdigit('5'));
	printf("\nisdigit test 3: '3' = %d\n", ft_isdigit('3'));

	//ft_isalnum() tests:
	printf("\nisalnum test 1: '3' = %d", ft_isalnum('3'));
	printf("\nisalnum test 2: 'A' = %d", ft_isalnum('A'));
	printf("\nisalnum test 3: '$' = %d\n", ft_isalnum('$'));
	
	//ft_isascii() tests:
	printf("\nisascii test 1: 'A' = %d", ft_isascii('A'));
	printf("\nisascii test 2: '3' = %d", ft_isascii('3'));
	printf("\nisascii test 3: '$' = %d\n", ft_isascii('$'));

	//ft_isprint() tests:
	printf("\nisprint test 1: 'A' = %d", ft_isprint('A'));
	printf("\nisprint test 2: '3' = %d", ft_isprint('3'));
	printf("\nisprint test 3: '$' = %d\n", ft_isprint('$'));

	//ft_strlen() tests:
	printf("\nstrlen test 1: 'Hi' = %d", ft_strlen("Hi"));
	printf("\nstrlen test 2: 'Hello' = %d", ft_strlen("Hello"));
	printf("\nstrlen test 3: 'Testing' = %d\n", ft_strlen("Testing"));

	//ft_toupper() tests:
	printf("\nft_toupper test 1: 'a' = %c", ft_toupper('a'));
	printf("\nft_toupper test 2: 'A' = %c", ft_toupper('A'));
	printf("\nft_toupper test 3: 'b' = %c\n", ft_toupper('b'));

	//ft_tolower() tests:
	printf("\nft_tolower test 1: 'A' = %c", ft_tolower('A'));
	printf("\nft_tolower test 2: 'a' = %c", ft_tolower('a'));
	printf("\nft_tolower test 3: 'B' = %c\n", ft_tolower('B'));

	//ft_strchr() tests:
	printf("\nft_strchr test 1 'B': Before = 'ABC'");
	printf("\nAfter = '%s'", ft_strchr("ABC", 'B'));

	printf("\nft_strchr test 2 'E': Before = 'DEEF'");
	printf("\nAfter = '%s'\n", ft_strchr("DEEF", 'E'));

	//ft_strrchr() tests:
	printf("\nft_strrchr test 1 'C': Before = 'ABCDEFCD'");
	printf("\nAfter = '%s'", ft_strrchr("ABCDEFCD", 'C'));

	printf("\nft_strrchr test 2 'E': Before = 'DEEF'");
	printf("\nAfter = '%s'\n", ft_strrchr("DEEF", 'E'));

	//ft_memset() tests:
	char str[20] = "ABCD EFGH";
	printf("\nmemset test: Before = '%s'\n", str);
	printf("After = '%s'", ft_memset(str, 'x', 4));

	//ft_bzero() tests:
	char str2[20] = "ABCD EFGH";
	printf("\n\nbzero test: Before = '%s'\n", str2);
	ft_bzero(str2, 4);
	printf("After = '%s'", str2);

	//ft_memcpy() tests:
	char dest[20] = "Destination";
	char src[20] = "Source";
	printf("\n\nMemcpy test:\n");
	printf("\nPre-memcpy:\nDestination = '%s'\nSource = '%s'\n", dest, src);
	ft_memcpy(dest, src, 20);
	printf("\nPost-memcpy:\nDestination = '%s'\nSource = '%s'\n", dest, src);

	return(0);
}
