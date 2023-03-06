/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:28:45 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/06 17:02:41 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"

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
	return(0);
}
