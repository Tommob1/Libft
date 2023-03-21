/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:06:24 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/21 15:56:35 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*c;
	int		i;

	i = 0;
	c = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		c[i++] = str[start++];
	c[i] = '\0';
	return (c);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		a;
	char	**b;

	if (!s)
    	return (0);

	char **b = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!b)
    	return (0);

	i = 0;
	j = 0;
	a = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && a < 0)
			a = i;
		else if ((s[i] == c || i == ft_strlen(s)) && a >= 0)
		{
			b[j++] = word_dup(s, a, i);
			a = -1;
		}
		i++;
	}
	b[j] = 0;
	return (b);
}
