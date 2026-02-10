/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:48:20 by meslim            #+#    #+#             */
/*   Updated: 2026/02/11 00:11:54 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int   nb)
{
    if (nb == -2147483648)
    {
        write (1, "-", 1);
        write (1, "2147483648", 10);
        return;
    }
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar ('-');
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}
// int main(void)
// {
//     ft_putnbr(0);
// }