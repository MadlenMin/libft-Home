/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:41:59 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:40:39 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	if (a == '\0' && b == '\0')
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
   // char arr[100] = "Axper harazat";
   // char src[50] = "       ";
   // printf("%s" , (char *)ft_memcpy(arr,src,5));
    printf("%s", (char *) ft_memcpy(((void *)0), ((void *)0), 3));
	//printf("%s", (char *)memcpy(((void *)0), ((void *)0), 3));
    return 0;
}*/
