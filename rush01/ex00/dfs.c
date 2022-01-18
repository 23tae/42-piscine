/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkim <lkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:03:43 by lkim              #+#    #+#             */
/*   Updated: 2022/01/16 19:03:52 by lkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_rush.h"

int	g_size;
int	*g_args;
int	**g_offset;
int	g_end = 0;

void	print(void)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= g_size)
	{
		j = 1;
		while (j <= g_size)
		{
			c = g_offset[i][j] + '0';
			write(1, &c, 1);
			if (j < g_size)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_used(int r, int c, int n)
{
	int	check;
	int	nr;
	int	nc;

	check = 1;
	nr = r;
	while (nr > 0)
	{
		if (g_offset[--nr][c] == n)
			check = 0;
	}
	nc = c;
	while (nc > 0)
	{
		if (g_offset[r][--nc] == n)
			check = 0;
	}
	return (check);
}

void	is_valid(void)
{
	if (!start_check(g_offset, g_args))
		return ;
	g_end = 1;
	print();
}

void	dfs(int r, int c, int n)
{
	if (g_end)
		return ;
	if (r == g_size && c == g_size)
	{
		g_offset[r][c] = n;
		is_valid();
		return ;
	}
	g_offset[r][c] = n;
	if (c == g_size)
	{
		r++;
		c = 1;
	}
	else
		c++;
	n = 1;
	while (n <= g_size)
	{
		if (is_used(r, c, n))
		{
			dfs(r, c, n);
		}
		n++;
	}
}
