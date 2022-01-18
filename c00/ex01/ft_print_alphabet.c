/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:01:33 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/12 18:01:36 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    char letter;
    letter = 'a';
    while ( letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
