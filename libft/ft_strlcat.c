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
	size_t	i;
	size_t	t1;
	size_t	t2;

	i = 0;
	t1 = ft_strlen(dest);
	t2 = ft_strlen(src);
	if (size <= t1)
		return (t2 + size);
	while (src[i] != '\0' && t1 + i < size - 1)
	{
		dest[t1 + i] = src[i];
		i++;
	}
	dest[t1 + i] = '\0';
	return (t1 + t2);
}
