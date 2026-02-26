/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 23:21:36 by meslim            #+#    #+#             */
/*   Updated: 2026/02/12 21:50:59 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;
    int sorted;

    sorted = 0;

    while (!sorted)
    {
        i = 0;
        sorted = 1;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                sorted = 0;
            }
            i++;
        }
    }
}

// #include <stdio.h>
// int main(void)
// {
//     int i;
//     i = 0;
//     int arr[5] = {5,4,3,2,1};
//     ft_sort_int_tab(arr, 5);
//     while (i < 5)
//     {
//         printf("%d", arr[i]);
//         i++;
//     }
// }