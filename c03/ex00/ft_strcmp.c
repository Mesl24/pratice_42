/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:40:08 by meslim            #+#    #+#             */
/*   Updated: 2026/02/16 22:49:18 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *s1 = "Hello Habibiii";
//     char    *s2 = "Hello Habibiiiii";
//     printf("%d", ft_strcmp(s1,s2));
// }