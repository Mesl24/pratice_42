/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:25:57 by meslim            #+#    #+#             */
/*   Updated: 2026/02/11 22:29:23 by meslim           ###   ########.fr       */
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

#include <stdio.h>
int main(void)
{
    char    *str = "hii there";
    printf("%d", ft_strlen(str));

}