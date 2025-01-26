/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:04:26 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/26 14:35:44 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>
int main()
{
    char a = 'A';
    char b = 'b';
    char c = '&';
    printf("%c %c %c",ft_lower(a), ft_lower(b), ft_lower(c));
    return 0;

}*/
