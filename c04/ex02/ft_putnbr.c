/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:52:16 by meslim            #+#    #+#             */
/*   Updated: 2026/02/24 13:43:08 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putnbr(int   nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
        return;
    }
    if (nb <= 2147483647)
    {
        if (nb < 0)
        {
            nb = -nb;
            write (1, "-", 1);
            ft_putnbr(nb);
        }
        else if (nb < 10)
        {
            c = nb + '0';
            write (1, &c, 1);
        }
        else
        {
            ft_putnbr(nb / 10);
            c = (nb % 10) + '0';
            write (1, &c, 1);
        }
    }
}

int main(void)
{
    int nb = 230;
    ft_putnbr(nb); 
}


#include <unistd.h>
void    ft_putnbr(int nb)
{
    char c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb <= 2147483647)
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
            ft_putnbr(nb);
        }
        else if (nb >= 10)
        {
            c = (nb / 10) + '0';
            ft_putnbr(nb);
        }
        else
        {
            c = (nb % 10) + '0';
            write(1, &c, 1);
        }

    }
}