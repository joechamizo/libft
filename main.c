/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:22:57 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/17 18:57:46 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


#define RED     "\x1b[31m"
#define NRED    "\x1b[1,31m"
#define GREEN   "\x1b[32m"
#define NGREEN	"\x1b[1;32m"
#define YELLOW  "\x1b[33m"
#define RESET   "\x1b[0m"

int isok = 1;
int linew = 80;
char linechar = '-';
char crand;
int width = 80;

void msleep(long msec) {
    struct timespec ts;
    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000L;
    nanosleep(&ts, NULL);
}

void borralin() {
    fflush(stdout);
	msleep(25);
	printf("\x1b[2K");
    printf("\r");
    fflush(stdout);
}

void printline(int w, char c)
{
	printf(YELLOW);
	w--;
	while (w--)
		printf("%c", c);
	printf(RESET);
}

void printresult(int isok)
{
	printf("Result ==>" RESET);
	(isok) ? printf(GREEN " <OK>\n" RESET) : printf(RED " <KO>\n" RESET);
	//printline(width, linechar);
	printf("\n");
	msleep(200);
}
int pr_okko(int isok)
{
	if (isok == 1)
		printf(GREEN " <OK>" RESET);
	else
		(printf(RED " <KO>" RESET), isok = 0);
	return (isok);
}

char randchar(void)
{
	char res = rand() % 128;
	while (res == 10)
		res = rand() % 128;
	return (res);
}

int test_func(int type_func, int (*ft_func)(int), int (*std_func)(int), char *name)
{
    isok = 1;
	if (type_func == 1)
	{
		printf(GREEN "%s.c" RESET "\n", name);
		for (int i = 0; i < 25; i++)
		{
			crand = randchar(); 
			printf("Testing: '%c'=%d",crand, ft_func(crand));
			if (pr_okko(!!ft_func(crand) == !!std_func(crand)) == 0)
				isok = 0;
			borralin();
		}
		printresult(isok);
	}	
	return (isok);
}

int t_ft_strlen(void)
{
	// test strlen
	isok = 1;
	char frase[256];
	strcpy(frase, "Hola! Esto es una prueba.");
	borralin();
	printf(GREEN "ft_strlen.c\n" RESET);
	printf(" %s = %zu\n", frase, ft_strlen(frase));
	strcpy(frase, "Esto es una segunda prueba de strlen");
	printf(" %s = %zu\n", frase, ft_strlen(frase));
	printresult(isok);
	return (isok);
}

void printheader(void)
{

	system("clear");
	printf(YELLOW "+");
	printline(78, '=');
	printf(YELLOW "+\n");
	printf(YELLOW "|                       Prueba de mis funciones"
		" LIBFT                         " YELLOW "|\n");
	printf(YELLOW "+");
	printline(78, '=');
	printf(YELLOW "+\n\n");


}

void printend(void)
{
	printf("\n");

	printline(width, '=');
	printf("\n\n");
}

int	main(void)
{
	char	crand = randchar();
	int		isok = 1;
	printheader();
	test_func(1, ft_isalpha, isalpha, "ft_isalpha");
	test_func(1, ft_isdigit, isdigit, "ft_isdigit");
	test_func(1, ft_isalnum, isalnum, "ft_isalnum");
	test_func(1, ft_isprint, isprint, "ft_isprint");
	test_func(1, ft_isascii, isascii, "ft_isascii");
	t_ft_strlen();
	printend();
}
