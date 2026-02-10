/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:14:13 by meslim            #+#    #+#             */
/*   Updated: 2026/02/10 22:50:04 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    char    c;
    c = 'z';
    
    while(c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
}