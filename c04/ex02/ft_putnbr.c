/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:24:52 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/24 16:24:53 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			print('-');
			nb *= -1;
		}
		if (nb < 10)
		{
			print(nb + 48);
			return ;
		}
		else
			ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}