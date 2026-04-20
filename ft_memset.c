/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:43:51 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/19 12:59:50 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int c, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (count--)
	{
		*p++ = (unsigned char)c;
	}
	return (dest);
}
