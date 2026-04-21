/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:00:50 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/21 13:03:26 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	get_len(int n)
{
	if (n < 0)
		return (1 + get_len(-n));
	if (n < 10)
		return (1);
	return (1 + get_len(n / 10));
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	char	*nb_str;
	char	*nb_start;
	long	num;

	num = n;
	n_len = get_len(n);
	nb_str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!nb_str)
		return (NULL);
	nb_start = nb_str;
	nb_str += n_len;
	*nb_str-- = '\0';
	if (num < 0)
		num = -num;
	if (num == 0)
		*nb_str = '0';
	while (num > 0)
	{
		*nb_str = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		*nb_str = '-';
	return (nb_start);
}
