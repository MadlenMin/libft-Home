/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:29:20 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:44:28 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*buffer;

	len = ft_strlen(s1) + ft_strlen(s2);
	buffer = (char *)malloc(len + 1);
	i = 0;
	if (!buffer)
		return (NULL);
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
#include <stdio.h>

int main ()
{
	char hel[] = "Hello";
	char lo[] = " Love";
	printf("%s", ft_strjoin(hel,lo));
	return 0;
}
*/	
