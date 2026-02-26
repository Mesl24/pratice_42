/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:52:31 by meslim            #+#    #+#             */
/*   Updated: 2026/02/16 22:11:00 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char  *str)
{
    int i;
    int word;

    word = 1;
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (word && str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            else if (!word && str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
            word = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            word = 0;
        else
            word = 1;
        i++;
    }
    return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "hello how are+y 42uoi ok";
//     printf("%s", ft_strcapitalize(str));
// }
