/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:37:07 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:34:43 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	int		len;

	len = count * size;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	tmp = malloc(len);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, len);
	return (tmp);
}
