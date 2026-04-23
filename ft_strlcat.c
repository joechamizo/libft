/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:35:05 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/23 16:13:29 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	remain;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	dst += d_len;
	remain = dstsize - d_len;
	while (*src && remain-- > 1)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (s_len + d_len);
}
