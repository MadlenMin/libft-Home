/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:39:54 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:42:05 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nbr, fd);
	}
	else if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar_fd((nbr + '0'), fd);
}
