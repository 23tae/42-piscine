/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:42:26 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/15 11:54:15 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	k;
	int		ctr;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= (-1);
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		ctr = 1;
		while (nb / ctr >= 10)
			ctr *= 10;
		k = nb / ctr + '0';
		nb %= ctr;
		write(1, &k, 1);
		if (nb != 0)
		{
			ft_putnbr(nb);
		}
	}
}

int	main(void)
{
	ft_putnbr(247);
	return (0);
}
