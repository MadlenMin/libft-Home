/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:25:36 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:40:51 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	if (a < b)
		ft_memcpy(a, b, len);
	else if (a > b)
	{
		i = len;
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
	}
	return (dst);
}
