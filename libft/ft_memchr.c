/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:59 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/25 18:12:29 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (n)
	{
		if (*str == a)
			return (str);
		str++;
		--n;
	}
	return (NULL);
}
