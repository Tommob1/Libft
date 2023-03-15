/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:24:42 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/15 13:48:21 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	res;

	s = (char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(s);
	res = 0;
	i = 0;
	if (dstsize > dst_len)
		res = src_len + dst_len;
	else
		res = src_len + dstsize;
	while (s[i] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = s[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (res);
}