/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:05:13 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/17 10:05:15 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
 
void ft_putstr(char *str)
{
    int count;
    int i;
    i = 0;
    while(str[i]!='\0')    
    {
        char c = str[i];
        write(1, &c, 1);
        i++;
    }
}


int main (void)
{
    ft_putstr("hello");
    return 0;
}