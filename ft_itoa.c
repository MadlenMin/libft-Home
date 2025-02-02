/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:09:11 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:37:50 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len ++;
	}
	return (len);
}

static long	negative(long nbr, char *res)
{
	if (nbr < 0)
	{
		res[0] = '-';
		return (-nbr);
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	result[0] = '0';
	if (nbr == 0)
		return (result);
	else
		nbr = negative(nbr, result);
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		i--;
	}
	return (result);
}
/*
#include <stdio.h>
int main ()
{
    long a = 12456789;
    printf("%d", int_len(a));
    return 0;
}*/
