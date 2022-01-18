/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:06:26 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/12 18:06:29 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n)
{
    if ( n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}