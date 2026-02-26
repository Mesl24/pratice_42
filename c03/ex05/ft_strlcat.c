/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:21:26 by meslim            #+#    #+#             */
/*   Updated: 2026/02/19 14:39:53 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char  *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_len;
    unsigned int src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    if (size <= dest_len)
        return (size + src_len);
    while (src[i] != '\0' && i < size - dest_len - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest_len + src_len);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *src = "Hello World";
//     char    dest[30];
//     unsigned int size = 50;
//     printf("%d", ft_strlcat(dest,src,size));
// }