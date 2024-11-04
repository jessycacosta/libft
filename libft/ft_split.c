/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:16:55 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/04 15:13:37 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_sub(char const *s, char c);
char	*ft_array(char const *s, char c);
void	*ft_free(char **array, int i);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	if (!s && !c)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_count_sub(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			array[i] = ft_array(s, c);
			if (array[i] == NULL)
				return (ft_free(array, i));
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}

size_t	ft_count_sub(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			size++;
			while (*s != c && *s)
				s++;
		}
	}
	return (size);
}

char	*ft_array(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	*ft_free(char **array, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(array[j]);
		j++;
	}
	free(array);
	return (NULL);
}
