/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:51:22 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:43:15 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	if (!s || !*s)
		return (NULL);
	while (*p && *p != (char )c)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		p++;
	return (p);
}

#include <stdio.h>
int main()
{
    char c = 'a';
    char arr[10] = "Hyly";
    printf("%s", ft_strchr(arr,c));
    return 0;
}*/
