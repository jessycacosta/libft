/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:41:08 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/31 15:28:30 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len_max;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_max = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len_max > i && ft_strchr(set, s1[len_max - 1]))
		len_max--;
	str = (char *)malloc((len_max - i + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (i < len_max)
	{
		str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}
