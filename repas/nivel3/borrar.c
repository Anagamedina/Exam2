/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borrar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:10:12 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 14:17:19 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    
    // Verificar si se pasaron exactamente dos argumentos al programa
    if (argc == 3)
    {
        // Iterar sobre los caracteres de argv[2] y argv[1]
        while (argv[2][j] && argv[1][i])
        {
            // Si los caracteres son iguales, avanzar en argv[1]
            if (argv[2][j] == argv[1][i])
                i++;
            // Siempre avanzar en argv[2]
            j++;
        }
        
        // Si se ha llegado al final de argv[1], significa que s1 está escondida en s2
        if (argv[1][i] == '\0')
            write(1, "1", 1); // Escribir "1" en la salida estándar
        else
            write(1, "0", 1); // Escribir "0" en la salida estándar
    }
    
    // Escribir una nueva línea al final, independientemente del resultado
    write(1, "\n", 1);
    
    return (0); // Terminar el programa exitosamente
}

