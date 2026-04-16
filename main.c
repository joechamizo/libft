/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:22:57 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/16 16:03:39 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RESET   "\x1b[0m"

int	main(void)
{
	system("clear");
	printf(YELLOW "+================================================+\n");
	printf("| " RED "        Prueba de mis funciones LIBFT          " YELLOW "|\n");
	printf("+================================================+\n\n");
	printf(GREEN "ft_isalpha.c" RESET "\n");
	printf(YELLOW "--------------------------------------------------" RESET "\n");
	printf(" A = %d\n", ft_isalpha('A'));
	printf(" 0 = %d\n", ft_isalpha('0'));
	printf(" & = %d\n", ft_isalpha('&'));
	printf(" ( = %d\n", ft_isalpha('('));
	printf(" f = %d\n", ft_isalpha('f'));
	printf("\n");
	printf(GREEN "ft_isdigit.c" RESET "\n");
	printf(YELLOW "--------------------------------------------------" RESET "\n");
	printf(" A = %d\n", ft_isdigit('A'));
	printf(" 0 = %d\n", ft_isdigit('0'));
	printf(" & = %d\n", ft_isdigit('&'));
	printf(" ( = %d\n", ft_isdigit('('));
	printf(" 8 = %d\n", ft_isdigit('8'));
	printf("\n");
	printf(GREEN "ft_isalnum.c" RESET "\n");
	printf(YELLOW "--------------------------------------------------" RESET "\n");
	printf(" A = %d\n", ft_isalnum('A'));
	printf(" 0 = %d\n", ft_isalnum('0'));
	printf(" & = %d\n", ft_isalnum('&'));
	printf(" ( = %d\n", ft_isalnum('('));
	printf(" 8 = %d\n", ft_isalnum('8'));
	printf("\n");
	printf(GREEN "ft_strlen.c\n" RESET);
	printf(YELLOW "--------------------------------------------------" RESET "\n");
	printf(" Hola! esto es una prueba =" GREEN " %zu\n" RESET, ft_strlen("Hola! esto es una prueba"));
	printf(" Prueba numero 2 = " GREEN "%zu\n" RESET, ft_strlen("Prueba numero 2"));
	printf("==================================================\n\n");
}
