/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:36:52 by meslim            #+#    #+#             */
/*   Updated: 2026/02/12 23:49:48 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strupcase(char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
    return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "hello WorLd";
//     printf("%s", ft_strupcase(str));
// }