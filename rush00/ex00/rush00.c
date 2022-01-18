/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseo <kseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:37:07 by kseo              #+#    #+#             */
/*   Updated: 2022/01/09 13:27:25 by kseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	row;

	line = 0;
	while (line < y)
	{
		row = 0;
		if (x < 1 || y < 1)
			break ;
		while (row < x)
		{
			if ((line == 0 || line == y - 1) && (row == 0 || row == x - 1))
				ft_putchar('o');
			else if ((row > 0 && row < x - 1) && (line == 0 || line == y - 1))
				ft_putchar('-');
			else if ((line > 0 && line < y - 1) && (row == 0 || row == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		line++;
	}
}
