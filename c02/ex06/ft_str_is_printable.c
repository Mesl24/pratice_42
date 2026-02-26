int ft_str_is_lowercase (char   *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            i++;
        else
            return (0);
    }
    return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "helloworld";
//     printf("%d", ft_str_is_lowercase(str));
// }