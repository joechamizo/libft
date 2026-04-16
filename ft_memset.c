/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:43:51 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/15 13:10:25 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int c, size_t count)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = dest;
	while (i < count)
	{
		p[i] = (unsigned char *)c;
		i++;
	}
	return (dest);
}
