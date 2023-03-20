/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:42:55 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/20 11:39:42 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	a;
	char			*b;

	b = 0;
	a = 0;
	while (s[a])
	{
		if (s[a] == (char)c)
			b = (char *)&s[a];
		a++;
	}
	if ((char)c == s[a])
		return ((char *)&s[a]);
	return (b);
}
