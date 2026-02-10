/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:45:59 by meslim            #+#    #+#             */
/*   Updated: 2026/02/10 22:12:07 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    c;
    c = 'a';
    
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
// }