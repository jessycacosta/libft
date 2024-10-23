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
#include <string.h>
#include <ctype.h>

int	 main(void)
{
	printf("Test isalpha-----------------------\n"); 
	printf("ft_isalpha: %d\n", ft_isalpha('A'));
	printf("isalpha: %d\n", isalpha('A'));
	printf("ft_isalpha: %d\n", ft_isalpha('\n'));
	printf("isalpha: %d\n", ft_isalpha('\n'));

	printf("Test isdigit-----------------------\n");
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit(52));
        printf("%d\n", ft_isdigit('S'));
	
	printf("Test isalnum-----------------------\n");
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('*'));

	printf("Test isascii-----------------------\n");
	printf("%d\n", ft_isascii(125));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(-1));
	
	printf("Test isprint-----------------------\n");
        printf("%d\n", ft_isprint(127));
        printf("%d\n", ft_isprint(' '));
        printf("%d\n", ft_isprint(32));
        printf("%d\n", ft_isprint(26));
	        
        printf("Test strlen-----------------------\n");
        printf("%zu\n", ft_strlen("jessyca"));
        printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", ft_strlen("mais"));
	printf("%zu\n", ft_strlen("hello word! 42!"));
	
	printf("Test memset-----------------------\n");
	char	str[15] = "Hello World!";
	printf("%s\n", str);
	ft_memset(str, '*', 5);
	printf("%s\n", str);
	
	printf("Test bzero-----------------------\n");
	char	buffer[15] = "Hello World!";
	printf("%s\n", buffer);
	ft_bzero(buffer, 5);
	for (int i = 0; i < 15; i++) 
	{
		if (buffer[i] == '\0') 
		{
			printf("\\0");
        	} else {
        		printf("%c", buffer[i]);
        	}
        }
        printf("\n");
        
        printf("Test memcpy-----------------------\n");
	char	*src = "Hello World!";
	char	dest[15];
	printf("src: %s\n", src);
	ft_memcpy (dest, src, 5);
	printf("dest: %s\n", dest);
	memcpy(dest, src, 5);
	printf("dest: %s\n", dest);
	
	printf("Test toupper-----------------------\n");
	printf("%c\n", ft_toupper('j'));
	printf("%c\n", ft_toupper('a'));
	
	printf("Test tolower-----------------------\n");
	printf("%c\n", ft_tolower('J'));
	printf("%c\n", ft_tolower('A'));
	
	printf("Test strncmp-----------------------\n");
	char	*s1 = "I love 42";
	char	*s2 = "I lovy 42";
	printf("%d\n", ft_strncmp(s1, s2, 7));
      	        	
	return (0);
}
