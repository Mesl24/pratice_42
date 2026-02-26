/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:11:33 by meslim            #+#    #+#             */
/*   Updated: 2026/02/16 22:31:28 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (char    *str)
{
     int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int ft_strlcpy (char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));    
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

// #include <stdio.h>
// int main(void)
// {
//     char    *src = "hello world";
//     char    dest[40];
//     unsigned int size = 4;

//     printf("%d", ft_strlcpy(dest, src, size));
// }