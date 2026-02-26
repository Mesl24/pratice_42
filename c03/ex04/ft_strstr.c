/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:17:47 by meslim            #+#    #+#             */
/*   Updated: 2026/02/19 14:21:09 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j])
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "Hey Man";
//     char    *to_find = "a";
//     printf("%s", ft_strstr(str,to_find));
// }