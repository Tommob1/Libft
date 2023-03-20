/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:37:19 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/20 11:39:07 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	a;
	size_t	b;

	a = -1;
	b = ft_strlen(s);
	while (++a < b + 1)
		if (s[a] == (char)c)
			return (((void *)&((char *)s)[a]));
	return (0);
}
