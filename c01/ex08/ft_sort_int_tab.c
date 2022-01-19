/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:06:03 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/17 10:06:04 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = 0;
    int loc = 0;
    int mx;
    for(j=0; j<size-1; j++)
    j = -1;
    while(j<size-1)
    {
        mx = tab[0];
        for(i=0; i<size-j; i++)
            {
                if(tab[i]>=mx)
                {
                    mx = tab[i];
                    loc = i;
                }
            }
        tab[loc] = tab[size-j-1];
        tab[size-j-1] = mx;
    }
    for(i=0; i<size; i++)
    {
        printf("%2d ", tab[i]);
    }
}
int main(void)
{   
    int size = 5;
    int arr[] = {-4,5,-1,3,2};
    ft_sort_int_tab(arr, size);
    return 0;
}