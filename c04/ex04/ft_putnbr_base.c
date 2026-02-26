/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meslim <meslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:19:26 by meslim            #+#    #+#             */
/*   Updated: 2026/02/25 15:08:01 by meslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_strlen (char	*str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (str);
}

void    ft_putnbr_base(int  nbr, char   *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(base);
	if (k < 2)
		return;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return;
			j++;
		}
		i++;
	}
	if (nbr == -2147483648)
    {
        write (1, "-", 1);
        write (1, "2147483648", 10);
        return;
    }
    if (nbr < 0)
    {
        write (1, "-", 1);
        ft_putnbr_base(-(nbr / k), base);
        ft_putchar(base[-(nbr % k)]);
        return;
    }
    if (nbr >= k)
        ft_putnbr_base(nbr / k, base);
    ft_putchar(base[nbr % k]);
}