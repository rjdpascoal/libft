/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:00:32 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/16 12:09:42 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_del(void *content)
{
		*(int*)content = 0;
		return ;
}

static	void	testmemset(void)
{
	char *str;
	char *str2;
	char *str3;
	char *str4;

	str3 = "testing_";
	str4 = "ft_strjoin";
	str = malloc(sizeof(char) * 40);
	str2 = malloc(sizeof(char) * 40);
	ft_strlcpy(str, "GeeksForGeeks is for programming geeks.", 39);
	ft_strlcpy(str2, "GeeksForGeeks is for programming geeks.", 39);
	printf("\nBefore memset(): %s\n", str);
	ft_memset(str + 13, '.', 8);
	ft_bzero(str2 + 13, 8);
	printf("After ft_memset():  %s \n", str);
	printf("After ft_bzero():  %s \n", str2);
	free(str);
	free(str2);
	str2 = ft_strjoin(str3, str4);
	printf("str1 - %s // str2 - %s\n ft_strjoin - %s\n", str3, str4, str2);
	free(str2);
	ft_strlcpy(str, "geeksForGeeks is for programming_geeks", 39);
	str2 = ft_strtrim (str, "geeks");
	printf( "str // %s\n", str);
	printf("ft_strtrim -- %s\n", str2);
	free (str2);

}

static	void	testmemcpy(void)
{
	char *str;
	char *str2;
	size_t a;

	str = malloc(sizeof(char) * 30);
	str2 = malloc(sizeof(char) * 30);
	ft_strlcpy(str, "function", 8);
	ft_strlcpy(str2, "_test", 5);
	printf("\n str1: %s // str2: %s ", str, str2);
	a = ft_strlcpy(str, str2, sizeof(str2));
	printf("\nft_strlcpy str1 %s // size %ld\n", str, a);
	ft_strlcpy(str, "function", 8);
	ft_strlcpy(str2, "_test", 5);
	a = ft_strlcat(str, str2, 10);
	printf("\nft_strlcat str1 %s // size %ld\n", str, a);
	ft_strlcpy(str, "function", 8);
	ft_strlcpy(str2, "_test", 5);
	printf("\n str1: %s // str2: %s ", str, str2);
	ft_memcpy(str, str2, 6);
	printf("\nft_memcpy : %s\n", str);
	free(str);
	free(str2);
}

static	void	testmemmove(void)
{
	char str[100] = "Learningisfun";
	char *first;
	char *second;
	char *dup;

	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	ft_memcpy(first + 7, first, 10);
	printf("memcpy overlap : %s\n ", str);
	ft_memmove(second + 7, second, 10);
	printf("ft_memmove overlap : %s\n ", str);
	ft_strlcpy(str, "Learningisfun", 14);
	first = ft_strnstr(str, "is", 12);
	printf("ft_strnstr // %s \n", first);
	dup = ft_strdup(str);
	printf("ft_strdup // %s\n", dup);
}

static	void	testmemchr(void)
{
	char *str;
	char ch;
	char *ret;

	ch = '.';
	str = ft_calloc(sizeof(char), 30);
	ft_strlcpy(str, "http://www.tutorialspoint.com", 29);
	ret = ft_calloc(sizeof(char), (strlen(str) + 2));
	puts(str);
	ft_memccpy(ret, str, '.', 29);
	printf("ft_memccpy - %s\n", ret);
	ret = ft_memchr(str, ch, strlen(str));
	printf("ft_memchr - %s\n", ret);
	ret = ft_strchr(str, ch);
	printf("ft_strchr - %s\n", ret);
	ret = ft_strrchr(str, ch);
	printf("ft_strrchr - %s\n", ret);
	ret = ft_substr(str, 8, 21);
	printf("ft_substr - %s\n", ret);
	free(str);
	free(ret);
}

static void	testmemcmp(void)
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "aBCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	puts("ft_memcmp");
	if (ret > 0)
		printf("str2 is less than str1\n");
	else	if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");
	puts("ft_strncmp");
	ret = ft_strncmp(str1, str2, 5);
	if (ret > 0)
		printf("str2 is less than str1\n");
	else	if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");
}

static	void	testftis(void)
{
	int	t1;
	int	t2;
	char	a;
	char	b;
	char	c;
	char	d;

	a = 'a';
	b = '2';
	t1 = ft_isalpha(a);
	t2 = ft_isalpha(b);
	printf("ft_isalpha// a: %c - %d  // b: %c - %d\n", a, t1, b, t2);
	t1 = ft_isdigit(a);
	t2 = ft_isdigit(b);
	printf("ft_isdigit// a: %c - %d  // b: %c - %d\n", a, t1, b, t2);
	t1 = ft_isalnum(a);
	t2 = ft_isalnum(b);
	printf("ft_isalnum// a: %c - %d  // b: %c - %d\n", a, t1, b, t2);
	b = 'A';
	c = ft_toupper(a);
	d = ft_toupper(b);
	printf("ft_toupper // a: %c - %c  // b: %c - %c\n", a, c, b, d);
	c = ft_tolower(a);
	d = ft_tolower(b);
	printf("ft_tolower // a: %c - %c  // b: %c - %c\n", a, c, b, d);
}

static	void	test7(void)
{
	char	**a;
	char	*b;
	int		i;

	i = 0;
	a = ft_split(" this   is a test to the function ft_split", ' ');
	while (a[i] != NULL)
	{
		printf("**%s", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	b = ft_itoa(-125);
	printf("ft_itoa // %s\n", b);
	b = ft_itoa(-2147483648);
	printf("ft_itoa(-2147483648) // %s\n", b);
	free(b);
}

char	test8(unsigned int n, char a)
{
	printf("n %d / a %c\n", n, a);
	return (a);
}

void 	test9(void)
{
	int	fd;

	fd = open("testfd.txt", O_RDWR);
//	ft_putchar_fd('d', fd);
//	ft_putstr_fd("abcdef",  fd);
//	ft_putendl_fd("abdccdrtgh " , fd);
	ft_putnbr_fd( -125, fd);
	close (fd);
}

void test10()
{
	int		tab[20];
	int		i;
	t_list	*begin;

	*tab = 0;
	begin = ft_lstnew(tab);
	printf("Test ft_lstnew :\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");
	printf("\nTest ft_lstadd_front :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("Should print numbers from 9 to 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
	printf("\n\nTest ft_lstsize :\n");
	if (ft_lstsize(begin) == 10)
		printf("OK\n");
	else
		printf("Failed.\n");
	printf("\nTest ft_lstlast :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");
	printf("\nTest ft_lstadd_back :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i + 10] = -i;
		ft_lstadd_back(&begin, ft_lstnew(tab + i + 10));
	}
	tmp = begin;
	printf("Should print numbers from 9 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
	printf("\n\nTest ft_lstdelone :\n");
	tmp = begin->next;
	ft_lstdelone(begin, ft_del);
	begin = tmp;
	printf("Should print numbers from 8 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
	printf("\n\nTest  ft_lstclear :\n");
	ft_lstclear(&begin,ft_del);
	printf("Should print...nothing.\n");
	tmp = begin;
	while (tmp)
	{
	printf("%i ", *((int*)tmp->content));
	tmp = tmp->next;								}
}


int		main(int argc, char **argv)
{
	int	i;
	char	(*f)(unsigned int,  char);

	f = &test8;

	if (argc != 2)
		return (0);
	i = ft_atoi(argv[1]);
	if (i == 1)
		testmemset();
	if (i == 2)
		testmemcpy();
	if (i == 3)
		testmemmove();
	if (i == 4)
		testmemchr();
	if (i == 5)
		testmemcmp();
	if (i == 6)
		testftis();
	if (i == 7)
		test7();
	if (i == 8)
		ft_strmapi("abcd", (*f));
	if (i == 9)
		test9();
	if (i == 10)
		test10();
	return (0);
}
