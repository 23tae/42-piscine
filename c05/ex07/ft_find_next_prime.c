/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:45:12 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/27 10:20:07 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	k;

	k = nb;
	if (nb > 1)
	{
		while (--k > 1)
		{
			if (!(nb % k))
				return (0);
		}
		return (1);
	}
	else
		return (0);
}

int	ft_find_next_prime(int	nb)
{
	if (nb <= 2)
		return (2);
	else
	{
		while (1)
		{
			if (ft_is_prime(nb))
				return (nb);
			nb++;
		}
	}
}
