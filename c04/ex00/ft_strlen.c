/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:45:16 by meslim            #+#    #+#             */
/*   Updated: 2026/02/24 13:19:22 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "Hello WOrld";
//     printf("%d", ft_strlen(str));
// }