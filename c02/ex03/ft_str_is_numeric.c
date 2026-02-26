/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:18:25 by meslim            #+#    #+#             */
/*   Updated: 2026/02/12 23:21:48 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numberic (char    *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "0123d45";
//     printf("%d", ft_str_is_numberic(str));
// }