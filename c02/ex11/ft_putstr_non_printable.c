/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:56:56 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/25 14:08:22 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	printable_check(unsigned char	c)
{
	if (31 < c && c < 127)
		return (0);
	return (1);
}

void	print_hex(unsigned int	c)
{
	c = c + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	convert(unsigned char	c)
{
	write(1, "\\", 1);
	print_hex(c / 16);
	print_hex(c % 16);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (printable_check(str[i]))
			convert(str[i]);
		else
			write(1, &str[i], 1);
		i ++;
	}
}
