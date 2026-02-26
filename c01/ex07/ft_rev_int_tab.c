/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:30:37 by meslim            #+#    #+#             */
/*   Updated: 2026/02/11 23:20:52 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        temp = tab[j];
        tab[j] = tab[i];
        tab[i] = temp;
        i++;
        j--;
    }
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int arr[5] = {1,2,3,4,5};
//     ft_rev_int_tab(arr, 5);
//     while (i < 5)
//     {
//         printf("%d", arr[i]);
//         i++;
//     }
// }