/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:11:18 by meslim            #+#    #+#             */
/*   Updated: 2026/02/19 13:17:08 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[j] != '\0')
        j++;
    while (i < nb && src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *src = "Hello World";
//     char    dest[30];
//     unsigned int nb = 5;

//     printf("%s", ft_strncat(dest,src,nb));
// }