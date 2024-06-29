/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:11:32 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 16:17:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    str_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        // Convertir todas las letras a minúsculas
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        // Convertir la primera letra de cada palabra a mayúsculas
        if ((str[i] >= 'a' && str[i] <= 'z') && 
            (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;

        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}

