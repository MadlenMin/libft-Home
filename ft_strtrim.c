/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:05:50 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/29 19:42:44 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return(ft_substr(s1,0,0));
	i = 0;
	j = ft_strlen(s1) - 1;	
	while (s1[i] && ft_strchr(set,s1[i]))
		i++;
	while (s1[j] && ft_strchr(set,s1[j]))
		j--;
	if (i > j)
		return (ft_substr("",0,0));
	return (ft_substr(s1, i, j - i + 1));
}

