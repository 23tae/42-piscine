/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:44:43 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/26 17:02:25 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (power < 0)
		return (0);
	while (i++ < power)
	{
		a *= nb;
	}
	return (a);
}
