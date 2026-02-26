/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:37:19 by meslim            #+#    #+#             */
/*   Updated: 2026/02/26 16:07:10 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int base_len (char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
            return 0;
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    if (i < 2)
        return (0);
    return (i);
}

int char_to_value(char  c, char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == c)
            return i;
        i++;
    }
    return (-1);
} 

int ft_atoi_base(char *str, char *base)
{
    int i;
    int base_len_value;
    int sign;
    int result;
    int digit_value;

    i = 0;
    base_len_value = base_len(base);
    sign = 1;
    result = 0;

    if (base_len_value == 0)
        return 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] != '\0')
    {
        digit_value = char_to_value(str[i], base);
        if (digit_value == -1)
            break;
        result = result * base_len_value + digit_value;
        i++;
    }
    return result * sign;
}

// #include <stdio.h>
// int main(void)
// {
//     char    *base = "0123456789ABCDEF";
//     char    *str = "  ++--+0193jdha";
//     printf("%d", ft_atoi_base(str, base));
// }



