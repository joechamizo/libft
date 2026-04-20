/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 01:54:07 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/20 16:11:50 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	temp_len;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		h = (char *)haystack;
		n = (char *)needle;
		temp_len = len;
		while (*h && *n && *h == *n && temp_len > 0)
		{
			h++;
			n++;
			temp_len--;
		}
		if (!*n)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
