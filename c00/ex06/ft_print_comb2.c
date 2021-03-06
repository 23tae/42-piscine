/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:07:19 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/20 13:49:24 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wrnum(int n1, int n2)
{
	char	str1;
	char	str2;
	char	str3;
	char	str4;

	str1 = n1 / 10 + '0';
	str2 = n1 % 10 + '0';
	str3 = n2 / 10 + '0';
	str4 = n2 % 10 + '0';
	write(1, &str1, 1);
	write(1, &str2, 1);
	write(1, " ", 2);
	write(1, &str3, 1);
	write(1, &str4, 1);
	if (n1 != 98)
		write(1, ", ", 3);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 00;
	n2 = 01;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			wrnum(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
