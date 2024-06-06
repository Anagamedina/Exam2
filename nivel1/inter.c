/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:08:05 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 13:48:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int     is_char_in_str(char c, char *str)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

void    inter(char *str1, char *str2)
{
    int     i;

    i = 0;
    while (str1[i])
    {
        if (is_char_in_str(str1[i], str2) && !is_char_in_str(str1[i], str1))
            ft_putchar(str1[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putchar('\n');
        return (1);
    }
    inter(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}

