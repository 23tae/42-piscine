/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:05:27 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/17 10:05:29 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strlen(char *str)
{
    int count;
    
    count = 0;
    while(*str != '\0')
    {
        count ++;
        str ++;
    }
    return (count);
}

int main(void)
{
    ft_strlen("hello");
}