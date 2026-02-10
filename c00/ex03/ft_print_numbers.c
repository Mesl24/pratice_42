/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:18:12 by meslim            #+#    #+#             */
/*   Updated: 2026/02/10 22:41:49 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int i;
    i = 0;

    while (i <= 9)
    {
        ft_putchar(i + '0');
        i++;
    }
}

// int main(void)
// {
//     ft_print_numbers();
// }