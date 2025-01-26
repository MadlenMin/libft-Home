/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:03:53 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/26 13:53:57 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char)c)
			temp = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (temp);
}
/*
#include <stdio.h>
int main()
{
    char c = '\0';
    char arr[10] = "Madeleine";
    printf("%s", ft_strrchr(arr,c));
    return 0;
}*/
