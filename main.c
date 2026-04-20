/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaqumar <joaqumar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:22:57 by joaqumar          #+#    #+#             */
/*   Updated: 2026/04/19 11:09:17 by joaqumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <sys/ioctl.h>

#define RED     "\x1b[31m"
#define NRED    "\x1b[1,31m"
#define GREEN   "\x1b[32m"
#define NGREEN	"\x1b[1;32m"
#define YELLOW  "\x1b[33m"
#define RESET   "\x1b[0m"

char title[] = "'P' Tester for libft_42";

int linew = 80;
int width = 80;
int temp = 1;
int testnb = 150;

int isok = 1;
const char *linechar = "═";
unsigned char crand;

void msleep(long msec) {
    struct timespec ts;
    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000L;
    nanosleep(&ts, NULL);
}

void borralin() {
    fflush(stdout);
	msleep(temp);
	printf("\x1b[2K");
    printf("\r");
    fflush(stdout);
}
void printline(int len, const char* c) {
    for (int i = 0; i < len; i++) {
        printf("%s", c);
    }
}

void actualizar_tamano() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    if (w.ws_col < 80) {
        linew = w.ws_col;
        width = w.ws_col;
    } else {
        linew = 80;
        width = 80;
    }
}

void printname(char *name);

void printresult(int isok, char *name)
{
	int namelen = strlen(name);
	if (isok == 1)
		printf(GREEN);
	else
		printf(RED);
	printf("%s" RESET, name);
	if (namelen < 20)
		printline(20 - namelen, ".");
	printf(RESET " - Test result  ==> " RESET);
	(isok) ? printf(GREEN " <OK>\n" RESET) : printf(RED " <KO>\n" RESET);
	//printline(width, linechar);
	msleep(5);
}
int pr_okko(int isok)
{
	if (isok == 1)
		printf(YELLOW "  <--> " RESET);
	else
		(printf(YELLOW "  <--> " RESET), isok = 0);
	return (isok);
}

char randchar(void)
{
	char res = rand() % 128;
	return (res);
}

int test_func(int type_func, int (*ft_func)(int), int (*std_func)(int), char *name)
{
    isok = 1;
    crand = 0;
    int namelen = strlen(name);
	printf("\033[?25l");
    	if (type_func == 1)
	{
		for (int i = 0; i < testnb; i++)
		{
			crand = randchar();
			printf(YELLOW "%s" RESET, name);
			if (namelen < 20)
				printline(20 - namelen, ".");
			printf(" - Testing **");
			if (isprint(crand) && !isspace(crand))
				printf(YELLOW " %c" RESET " ** ", crand);
			else
				printf("   ** ");
			if (pr_okko(ft_func(crand) == std_func(crand)) == 0)
				isok = 0;
			borralin();
			crand++;
		}
		printresult(isok, name);
	}	
	printf("\033[?25h");
	return (isok);
}

int t_ft_strlen(void)
{
	// test strlen
	isok = 1;
	char frase[256];
	strcpy(frase, "Hola! Esto es una prueba.");
	strcpy(frase, "Esto es una segunda prueba de strlen");
	printresult(isok, "ft_strlen");
	return (isok);
}

void printheader(int w)
{
	int	tit_len = strlen(title);
	int	tit_spc_l = (w - 2 - tit_len) / 2;
	int	tit_spc_r = w - tit_len - tit_spc_l - 2;

	system("clear");
	printf("width: %d\n", w);
	printf(YELLOW "╔");
	printline(w - 2, "═");
	printf(YELLOW "╗\n");
	printf(YELLOW "║");
	printline(tit_spc_l, " ");
	printf("%s", title);
	printline(tit_spc_r, " ");
	printf(YELLOW "║\n");
	printf(YELLOW "╚");
	printline(w - 2, "═");
	printf(YELLOW "╝\n\n");


}

void printend(int w)
{
	printf("\n" YELLOW);

	printline(w, "═");
	printf(RESET "\n\n");
}

int	main(void)
{
	char	crand = randchar();
	int		isok = 1;
	actualizar_tamano();
	printheader(linew);
	test_func(1, ft_isalpha, isalpha, "ft_isalpha");
	test_func(1, ft_isdigit, isdigit, "ft_isdigit");
	test_func(1, ft_isalnum, isalnum, "ft_isalnum");
	test_func(1, ft_isascii, isascii, "ft_isascii");
	test_func(1, ft_isprint, isprint, "ft_isprint");
	test_func(1, ft_isalpha, isalpha, "ft_strlen");
	test_func(1, ft_isdigit, isdigit, "ft_memsett");
	test_func(1, ft_isalnum, isalnum, "ft_bzero");
	test_func(1, ft_isprint, isprint, "ft_memcpy");
	test_func(1, ft_isascii, isascii, "ft_memmove");
	test_func(1, ft_isalpha, isalpha, "ft_strlcpy");
	test_func(1, ft_isdigit, isdigit, "ft_strlcat");
	test_func(1, ft_isalnum, isalnum, "ft_toupper");
	test_func(1, ft_isprint, isprint, "ft_tolower");
	test_func(1, ft_isascii, isascii, "ft_strchr");
	test_func(1, ft_isalpha, isalpha, "ft_strrchr");
	test_func(1, ft_isdigit, isdigit, "ft_memchr");
	test_func(1, ft_isalnum, isalnum, "ft_memcmp");
	test_func(1, ft_isprint, isprint, "ft_strnstr");
	test_func(1, ft_isascii, isascii, "ft_atoi");

//	t_ft_strlen();
	printend(linew);
}
