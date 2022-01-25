/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:02:28 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/24 17:59:03 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void	*addr, unsigned int	size)
{
	unsigned int	i;

	i = 0;
	size = i;
	write(1, "Hello, world!", 13);
	return (addr);
}
