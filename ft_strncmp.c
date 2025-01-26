/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:11:02 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/26 12:49:08 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] \
			&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
	{
		i++;
	}
	count = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (count);
}
/*
#include <stdio.h>

int main()
{
	//char he[] = "test\200";
	//char ha[] = "test\0";
	printf("%d", ft_strncmp("test\200","test\0",6));

}*/
