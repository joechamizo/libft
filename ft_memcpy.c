/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:18:56 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/16 08:15:05 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*d;
	unsigned char const	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char const *) src;
	while (count--)
	{
		*d++ = *s++;
	}
	return (dest);
}
