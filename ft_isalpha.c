/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:09:01 by mminasya          #+#    #+#             */
/*   Updated: 2025/01/25 21:32:12 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc)
	{
		int j = 0;
		while(argv[i][j])
		{
			int r = ft_isalpha(argv[i][j]);
			printf("%d ", r);
			j++;
		}
		i++;
	}
	return 0;
}*/
