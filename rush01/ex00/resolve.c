/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkim <lkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:05:22 by lkim              #+#    #+#             */
/*   Updated: 2022/01/16 19:05:25 by lkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "my_rush.h"

int	g_size;
int	*g_args;
int	**g_offset;
int	g_end;

int	**init_offset(void)
{
	int	**temp;
	int	i;

	temp = malloc(sizeof(int *) * 5);
	i = 0;
	while (i < 5)
	{
		temp[i++] = malloc(sizeof(int) * 5);
	}
	return (temp);
}

void	free_offset(int **g_offset)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		free(g_offset[i++]);
	}
	free(g_offset);
}

void	resolve(void)
{
	int	i;

	g_offset = init_offset();
	i = 1;
	while (i <= g_size)
	{
		dfs(1, 1, i++);
	}
	free_offset(g_offset);
}
