/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:57:19 by meslim            #+#    #+#             */
/*   Updated: 2026/02/11 22:05:18 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

// #include <stdio.h>
// int main(void)
// {
//     int a = 50;
//     int b = 2;

//     ft_ultimate_div_mod(&a, &b);
//     printf("%d%d", a, b);
// }