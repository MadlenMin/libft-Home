/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:03:58 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/26 15:25:06 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int			i;
	char		*copy;

	i = 0;
	copy = (char *)malloc(ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int main() {
    char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

 
     printf("Original: %s\n", original);
     printf("Duplicate: %s\n", duplicate);
     //free(duplicate); 

    return 0;
}*/
