/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:03:47 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/28 14:25:32 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = ft_strlen(little);
	while (*big != '\0' && len > 0)
	{
		if (len < i)
			return (NULL);
		if (ft_strncmp(big, little, i) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
