/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:20:28 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/29 17:22:30 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		ch;
	const char	*last;

	ch = (char)c;
	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			last = &s[i];
		}
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}
