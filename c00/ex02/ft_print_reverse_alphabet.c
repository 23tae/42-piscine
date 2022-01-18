/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:03:50 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/12 18:03:53 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_reverse_alphabet(void);

void ft_reverse_alphabet(void)
{
    char letter;
    letter = 'z';
    while ( letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}
