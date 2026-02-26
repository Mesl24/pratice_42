/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 22:49:33 by meslim            #+#    #+#             */
/*   Updated: 2026/02/16 22:59:31 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while ( i < n && s1[i] == s2[i] && s1[i])
        i++;
    if (i == n)
        return (0);
    else
        return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
  char *s1 = "Hello World";
  char *s2 = "Hede2o World";
  unsigned int n = 3;
  
  printf("%d", ft_strncmp(s1,s2,n));
}