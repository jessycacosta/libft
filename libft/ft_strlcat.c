/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:58:31 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/24 13:26:58 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dest;
	size_t	size_cat;

	size_src = 0;
	size_dest = 0;
	size_cat = 0;
	while (src[size_src] != '\0')
		size_src++;
	while (dest[size_dest] != '\0' && size_dest < size)
		size_dest++;
	if (size_dest == size)
		return (size + size_src);
	while (src[size_cat] != '\0' && (size_dest + size_cat) < (size - 1))
	{
		dest[size_dest + size_cat] = src[size_cat];
		size_cat++;
	}
	dest[size_dest + size_cat] = '\0';
	return (size_dest + size_src);
}
