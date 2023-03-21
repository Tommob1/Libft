/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:37:20 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/21 13:42:53 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = NULL;
	if (!s1 || !s2)
		return (0);
	else
	{
		str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (!str)
			return (0);
		ft_strlcpy(str, s1, s1_len + 1);
		ft_strlcpy(str + (s1_len), s2, s2_len + 1);
	}
	return (str);
}
