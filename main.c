/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:43 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/23 14:30:22 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char f_mapi(unsigned int i, char c)
{
	char str;
	i = 1;
	str = c + i;
	return (str);
}

void f_iteri(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void fdel_delone(void *content)
{
	free(content);
}

void f_iter(void *content)
{
	printf("%s\n", (char *)content);
}

void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void print_list_char(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void *uppercase_string(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    for (int i = 0; new_str[i]; i++)
        new_str[i] = toupper(new_str[i]);
    return new_str;
}

int	main(void)
{
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ISALPHA\n");
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('\n'));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ISDIGIT\n");
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('c'));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ISALNUM\n");
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", isalnum('s'));
	printf("%d\n", isalnum('\n'));

	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ISASCII\n");
	printf("%d\n", ft_isascii(125));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", isascii(125));
	printf("%d\n", isascii(-1));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ISPRINT\n");
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", isprint(127));
	printf("%d\n", isprint(32));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRLEN\n");
	printf("%zu\n", ft_strlen("jessyca"));
	printf("%zu\n", strlen("jessyca"));
	printf("%zu\n", ft_strlen("hello word! 42!"));
	printf("%zu\n", strlen("hello word! 42!"));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST MEMSET\n");
	char	str[15] = "Hello World!";
	printf("%s\n", str);
	ft_memset(str, '*', 5);
	printf("%s\n", str);
	char *test_memset;
	test_memset = memset(str, '*', 5);
	printf("%s\n", test_memset);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST BZERO\n");
	char	buffer[15] = "Hello World!";
	printf("%s\n", buffer);
	ft_bzero(buffer, 5);
	int	index = 0;
	while (index < 15) 
	{
		if (buffer[index] == '\0') 
		{
			printf("\\0");
        } else {
			printf("%c", buffer[index]);
		}
       	index++;
	}
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST MEMCPY - string\n");
	char	*src = "Hello World!";
	char	dest[7];
	printf("src: %s\n", src);
	ft_memcpy (dest, src, 5);
	printf("ft_memcpy: %s\n", dest);
	char	*src41 = "Hello World!";
	char	dest41[7];
	memcpy(dest41, src41, 5);
	printf("memcpy: %s\n", dest41);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRLCPY\n");
	char		dst[13] = "Hello";
	const char	*src0 = " World!";
	printf("%zu\n", ft_strlcpy(dst, src0, 9));
	char		dst4[13] = "Hello";
	const char	*src42 = " World!";
	printf("%zu\n", strlcpy(dst4, src42, 9));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST TOUPPER\n");
	printf("%c\n", ft_toupper('j'));
	printf("%c\n", ft_toupper('a'));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST TOLOWER\n");
	printf("%c\n", ft_tolower('J'));
	printf("%c\n", ft_tolower('A'));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRNCMP\n");
	char	*s1 = "I love 42";
	char	*s2 = "I lovy 42";
	printf("%d\n", ft_strncmp(s1, s2, 7));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ATOI\n");
	printf("%d\n", ft_atoi("   +---+-528"));
	printf("%d\n", atoi("   +---+-528"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", atoi("-42"));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRLCAT\n");
	char		dest1[13] = "Hello";
	const char	*src1 = " World!";
	size_t	size = 9;
	printf("total necessario: %zu\n", ft_strlcat(dest1, src1, size));
	printf("*dest1 concatenado: %s\n", dest1);
	char		dest2[13] = "Hello";
	const char	*src2 = " World!";
	size_t	size2 = 9;
	printf("total necessario: %zu\n", strlcat(dest2, src2, size2));
	printf("*dest2 concatenado: %s\n", dest2);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRCHR\n");
	printf("%s\n", ft_strchr("teste", 'e'));
	printf("%s\n", ft_strchr("jessyca", 's'));
	printf("%s\n", ft_strchr("42 school A++++++++", 357));
	printf("%s\n", ft_strchr("42 school A++++++++", '\0'));
	printf("\n");
	printf("%s\n", strchr("teste", 'e'));
	printf("%s\n", strchr("jessyca", 's'));
	printf("%s\n", strchr("42 school A++++++++", 357));
	printf("%s\n", strchr("42 school A++++++++", '\0'));
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRRCHR\n");
	printf("%s\n", ft_strrchr("teste", 'e'));
	printf("%s\n", ft_strrchr("jessyca", 's'));
	printf("%s\n", ft_strrchr("42 school A++++++++", 'o'));
	printf("%s\n", ft_strrchr("42 school A++++++++", 'b'));
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST MEMMOVE\n");
	//char	dest3[15];
	char	src3[] = "123456789";
	//char	dest4[15];
	char	src4[] = "123456789";
	ft_memmove(src3 + 2, src3, 5);
	printf("dest: %s\n", src3);
	//printf("%p\n", &src3);
	//printf("%p\n", &dest3);
	memmove(src4 + 2, src4, 5);
	printf("dest: %s\n", src4);
	//printf("%p\n", &src4);
	//printf("%p\n", &dest4);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST MEMCHR\n");
	char	*s0 = "Hello Andrielly";
	char	*meu = ft_memchr(s0, ' ', 10);
	printf("%s\n", meu);
	char	*s9 = "Hello Andrielly";
	char	*origin = memchr(s9, ' ', 10);
	printf("%s\n", origin);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST MEMCMP\n");
	char	s11[] = "Halloween!";
	char	s21[] = "Helloween!";
	int	minha = ft_memcmp(s11, s21, 6);
	printf("%d\n", minha);
	char	s12[] = "Halloween!";
	char	s22[] = "Helloween!";
	int	origin1 = memcmp(s12, s22, 6);
	printf("%d\n", origin1);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRNSTR\n");
	char	big[] = "Foo Bar Baz";
	char	little[] = "Bar";
	char 	*result1 = ft_strnstr(big, little, 15);
	printf("%s\n", result1);
	char	big1[] = "Foo Bar Baz";
	char	little2[] = "Bar";
	char	*result2 = strnstr(big1, little2, 15);
	printf("%s\n", result2);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST CALLOC\n");
	size_t	*a;
	a = (size_t *)ft_calloc( 5, sizeof(size_t));
	int	i = 0;
	while (i < 5) 
	{
		printf("%lu", a[i]);
		i++;
    }
	printf("\n");
	size_t	*b;
	b = (size_t *)calloc( 5, sizeof(size_t));
	int	j = 0;
	while (j < 5) 
	{
		printf("%lu", b[j]);
        j++;
    }
    
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRDUP\n");
	char	*s6;
	s6 = ft_strdup("Jess");
	printf("%s\n", s6);	
	char	*d6;
	d6 = strdup("Jess");
	printf("%s\n", d6);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST SUBSTR\n");
    char	*s7 = "Halloween!";
    printf("%s\n", ft_substr(s7, 0, 9));
    
    printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRJOIN\n");
    char	*s87 = "Happy";
    char	*s78 = " Halloween!";
    printf("%s\n", ft_strjoin(s87, s78));
    
    printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRTRIM\n");
    char	*str_trim = "***hello*** halloween ***hello***";
    char	*set = "***hello***";
    printf("%s\n", ft_strtrim(str_trim, set));
    
    printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRMAPI\n");
	
	char str40[] = "abc";
	char* str42;
	printf("%s\n", str40);
	str42 = ft_strmapi(str40, *f_mapi);
	printf("%s\n", str42);
		
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST STRITERI\n");
	char str53[] = "abc";
	printf("%s\n", str53);
	ft_striteri(str53, *f_iteri);
	printf("%s\n", str53);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST ITOA\n");
	int num1 = 12345;
	int num2 = -9876;
	int num3 = 03;

	char *str_itoa1 = ft_itoa(num1);
	char *str_itoa2 = ft_itoa(num2);
	char *str_itoa3 = ft_itoa(num3);
	
	printf("numero 1: %s\n", str_itoa1);
	printf("numero 2: %s\n", str_itoa2);
	printf("numero 3: %s", str_itoa3);
	
	free(str_itoa1);
	free(str_itoa2);
	free(str_itoa3);
		
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST SPLIT\n");
	char const  *str_split = "xxxxhello!xxxxxffffffxx";
    char **split_func;
    int i_split = 0;
    split_func = ft_split(str_split, 'x');
    while (split_func[i_split] != NULL)
    {
        printf("%s\n", split_func[i_split]);
        free(split_func[i_split]);
        i_split++;
    }
    free(split_func);
    printf("string original:%s\n", str_split);
    
    printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("       TEST PUTCHAR_FD\n");
	ft_putchar_fd('g', 1);
	ft_putchar_fd('\n', 1);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST PUTSTR_FD\n");
	ft_putstr_fd("teste", 1);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST PUTENDL_FD\n");
	ft_putendl_fd("teste", 1);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST PUTNBR_FD\n");
	ft_putnbr_fd(-2147483648, 1);
	
	printf("\n--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTNEW\n");
	int str70 = 50;
	t_list *new_list0 = ft_lstnew(&str70);
	print_list(new_list0);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTADD_FRONT\n");
	t_list *list = NULL;
	
	int val1 = 10;
	t_list *new_list1 = ft_lstnew(&val1);
	ft_lstadd_front(&list, new_list1);
	print_list(list);
	
	int val2 = 20;
	t_list *new_list2 = ft_lstnew(&val2);
	ft_lstadd_front(&list, new_list2);
	print_list(list);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTSIZE\n");
	t_list *list_size = NULL;
	
	int val3 = 10;
	t_list *new_list3 = ft_lstnew(&val3);
	ft_lstadd_front(&list_size, new_list3);
	
	int val4 = 20;
	t_list *new_list4 = ft_lstnew(&val4);
	ft_lstadd_front(&list_size, new_list4);
	
	int val5 = 30;
	t_list *new_list5 = ft_lstnew(&val5);
	ft_lstadd_front(&list_size, new_list5);
	
	printf("%d\n", ft_lstsize(list_size));
    
    printf("--------------------------------------\n");
	printf("--------------------------------------\n");
    printf("		TEST LSTADD_BACK\n");
	t_list *list_back = NULL;
	int val9 = 40;
	
	t_list *new_list9 = ft_lstnew(&val9);
	ft_lstadd_back(&list_back, new_list9);
	print_list(list_back);
	
	int val10 = 50;
	t_list *new_list10 = ft_lstnew(&val10);
	ft_lstadd_back(&list_back, new_list10);
	print_list(list_back);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTDELONE\n");
	char *str_del = ft_strdup("hello world");
	t_list *node0 = ft_lstnew(str_del);
	
	if (!node0)
		printf("erro de criacao\n");
	
	printf("antes de deletar: %s\n", (char *)node0->content);
	ft_lstdelone(node0, fdel_delone);
	printf("depois de deletar: %s\n", (char *)node0->content);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
    printf("		TEST LSTCLEAR\n");
	char *str_clear = ft_strdup("hello world");
	t_list *node1 = ft_lstnew(str_clear);
	
	if (!node1)
		printf("erro de criacao\n");
	
	printf("antes de deletar: %s\n", (char *)node1->content);
	ft_lstclear(&node1, fdel_delone);
	
	if (!node1)
		printf("sucesso\n");
	else
		printf("erro\n");
		
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTITER\n");
	t_list *list_iter = NULL;
	ft_lstadd_back(&list_iter, ft_lstnew("primeiro"));
	ft_lstadd_back(&list_iter, ft_lstnew("segundo"));
	ft_lstadd_back(&list_iter, ft_lstnew("terceiro"));
	ft_lstiter(list_iter, f_iter);
	
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("		TEST LSTMAP\n");
	t_list *list_map = ft_lstnew(strdup("hello"));
    ft_lstadd_back(&list_map, ft_lstnew(strdup("world")));
    ft_lstadd_back(&list_map, ft_lstnew(strdup("test")));
    printf("Original list: ");
    print_list_char(list_map);
    t_list *mapped_list = ft_lstmap(list_map, uppercase_string, fdel_delone);
    printf("Mapped list: ");
    print_list_char(mapped_list);
 	ft_lstclear(&list_map, free);
 	ft_lstclear(&mapped_list, free);
	
	return (0);
}
