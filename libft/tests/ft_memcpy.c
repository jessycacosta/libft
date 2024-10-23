/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:11:12 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/23 16:31:04 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src_cpy;
	char	*dest_cpy;

	i = 0;
	src_cpy = (char *) src;
	dest_cpy = (char *) dest;
	while (src_cpy[i] != '\0' && i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	dest_cpy[i] = '\0';
	return (dest_cpy);
}
