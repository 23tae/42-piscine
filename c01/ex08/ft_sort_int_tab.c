/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:06:03 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/20 16:56:33 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	while (a++ < size)
	{
		b = 0;
		while (++b < size)
		{
			if (tab[b - 1] > tab[b])
			{
				tmp = tab[b - 1];
				tab[b - 1] = tab[b];
				tab[b] = tmp;
			}
		}
	}
}
