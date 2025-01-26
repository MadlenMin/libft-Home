/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:18:52 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/25 22:04:14 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "Heyloo LooSee";
  	ft_bzero(s,5);
	printf("%s",s);
	return (0);
}*/
