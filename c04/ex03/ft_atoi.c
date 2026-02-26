/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:02:49 by meslim            #+#    #+#             */
/*   Updated: 2026/02/24 14:13:42 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char    *str)
{
    int i;
    int flag;
    int result;

    i = 0;
    flag = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            flag = -flag;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    result = result * flag;
    return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str = "----4221+--1234fsi3";
//     printf("%d", ft_atoi(str));
// }
