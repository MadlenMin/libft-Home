/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:56:38 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:40:14 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	void	*ptr;
	ptr = ft_memchr("     Hello",'H',8)) 
	printf("%s", ptr);
	return 0;

}*/
