/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:35:05 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:36:27 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
    char a = 'A';
    char b = 'и'; // why is this working the wey it should ?
    int aa = ft_isascii(a);
    int bb = ft_isascii(b);
    printf("%d %d ", aa, bb);
    return 0 ;

}*/
