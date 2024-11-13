/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:54:49 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/04 19:43:41 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_if_zero(char **result, long int *nbr);
static int	ft_len_nb(long int n);

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		len;

	nbr = n;
	len = ft_len_nb(n);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	ft_if_zero(&result, &nbr);
	result[len] = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (result);
}

static void	ft_if_zero(char **result, long int *nbr)
{
	if (*nbr == 0)
	{
		**result = '0';
		*nbr = -*nbr;
	}
}

static int	ft_len_nb(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
