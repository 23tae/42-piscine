/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkim <lkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:04:33 by lkim              #+#    #+#             */
/*   Updated: 2022/01/16 19:04:41 by lkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "my_rush.h"

int	g_size = 4;
int	*g_args;
int	**g_offset;

void	init(char **argv)
{
	int	i;
	int	length;

	g_args = malloc(sizeof(int) * g_size * 4);
	i = 0;
	length = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '4')
		{
			g_args[length] = argv[1][i] - '0';
			length++;
		}
		i++;
	}
}

int	check_length(int *args)
{
	int	i;

	i = 0;
	while (args[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	length;

	length = 0;
	if (argc == 2)
	{
		init(argv);
		length = check_length(g_args);
		if (length != 16)
			return (write(1, "error\n", 6));
		resolve();
	}
	else
		write(1, "error\n", 6);
}
