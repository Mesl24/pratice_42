/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:52:34 by meslim            #+#    #+#             */
/*   Updated: 2026/02/10 23:33:12 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                ft_putchar(i + '0');
                ft_putchar(j + '0');
                ft_putchar(k + '0');
                if(!(i == 7 && j == 8 && k == 9))
                    write(1, ", ", 2);
                k++;
            }
            j++;
        }
        i++;
    }
}

// int main(void)
// {
//     ft_print_comb();
// }