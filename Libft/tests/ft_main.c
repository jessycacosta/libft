/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:43 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/22 19:08:42 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	 main(void)
{
	printf("Test isalpha-----------------------\n"); 
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha(2));
	printf("%d\n", ft_isalpha('\n'));
        printf("%d\n", ft_isalpha('^'));
	
	printf("Test isdigit-----------------------\n");
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit(52));
        printf("%d\n", ft_isdigit('S'));
	
	printf("Test isalnum-----------------------\n");
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('\n'));

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

	return (0);
}
