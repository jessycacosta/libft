/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:30 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/04 11:19:43 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	 f(unsigned int i, char c)
{
	char str;
	i = 1;
	str = c + i;
	return (str);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main (void)
{
	char	str1[] = "abc";
	char	*str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
