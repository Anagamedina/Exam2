/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:20:52 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 16:11:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    // Primero, convertimos todas las letras a minúsculas
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    // Luego, capitalizamos la última letra de cada palabra
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}


/* Escriba un programa que tome una o más cadenas y, para cada argumento, ponga 
el último carácter que es una letra de cada palabra en mayúscula y el resto
en minúsculas, luego muestra el resultado seguido de \n.

Una palabra es una sección de cadena delimitada por espacios/tabulaciones o el inicio/final de la
cadena. Si una palabra tiene una sola letra, debe estar en mayúscula.

Una letra es un carácter del conjunto [a-zA-Z]

Si no hay parámetros, muestra \n.   */
