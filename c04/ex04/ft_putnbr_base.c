/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:25:05 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/25 19:03:16 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_check(char	*k)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (k[i])
	{
		while (k[j])
		{
			if (k[i] == k[j] && i != j)
				return (0);
			j ++;
		}
		if (k[i] == 43 || k[i] == 45)
			return (0);
		i ++;
	}
	if (i == 1)
		return (0);
	else
		return (i);
}

void	print(int	c, char	*base)
{
	char	k;

	k = base[c];
	write(1, &k, 1);
}

void	ft_putnbr(unsigned int	nb, char	*base, unsigned int	size)
{
	if (nb < size)
	{
		print(nb, base);
		return ;
	}
	else
		ft_putnbr(nb / size, base, size);
	ft_putnbr(nb % size, base, size);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	size;
	unsigned int	abs_nbr;

	size = valid_check(base);
	abs_nbr = nbr;
	if (size)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			abs_nbr *= -1;
		}
		ft_putnbr(abs_nbr, base, size);
	}
	else
		return ;
}
