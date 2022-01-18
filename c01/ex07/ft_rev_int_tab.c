/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:05:42 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/17 10:05:44 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    while(i<size/2)
    {
        int tmp;
        tmp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = tmp;
        i++;
    }
}

int main(void)
{
    int i = 0;
    int str[5] = {1,2,3,4,5};
    int size = 5;
    ft_rev_int_tab(str, size);
    while(i<size)
    {
        printf("%d", str[i]);
        i++;
    }
    return (0);
}