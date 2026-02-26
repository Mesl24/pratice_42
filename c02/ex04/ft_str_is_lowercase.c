/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:22:13 by meslim            #+#    #+#             */
/*   Updated: 2026/02/12 23:33:07 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase (char   *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "helloworld";
//     printf("%d", ft_str_is_lowercase(str));
// }