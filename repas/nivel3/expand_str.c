/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:15:25 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/27 00:30:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i;
    int flag = 0; // Variable para controlar si debemos imprimir un espacio antes del siguiente carácter

    if (argc == 2)
    {
        i = 0;
		// Saltamos los espacios en blanco y tabulaciones al inicio de la cadena
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            else
            {
				// Si la bandera está activada, imprimimos un espacio antes del siguiente carácter no blanco
                if (flag)
                    write(1, "   ", 3);
                flag = 0;// Desactivamos la bandera
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}


/*Si flag está activada, imprimimos tres espacios (puedes ajustar
 * el número de espacios según lo desees).
Luego desactivamos flag y escribimos el carácter actual 
en la salida estándar.   */
