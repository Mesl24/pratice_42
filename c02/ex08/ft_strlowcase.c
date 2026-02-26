/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:50:27 by meslim            #+#    #+#             */
/*   Updated: 2026/02/12 23:52:02 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowercase(char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "HELLO WorLd";
//     printf("%s", ft_strlowercase(str));
// }