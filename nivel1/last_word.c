/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:41:43 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/06 17:31:52 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void    last_word(char *str)
{
    int i = 0;
    int start = -1;

    // Encontrar el final de la cadena
    while (str[i])
        i++;

    // Retroceder desde el final para encontrar el final de la última palabra
    while (i >= 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
        i--;

    // Si la cadena no contiene palabras, terminar
    if (i < 0)
        return;

    // Marcar el final de la última palabra
    int end = i;

    // Retroceder desde el final de la última palabra para encontrar el principio de la última palabra
    while (i >= 0 && str[i] != ' ' && str[i] != '\t')
        i--;

    // Marcar el principio de la última palabra
    start = i + 1;

    // Imprimir la última palabra
    while (start <= end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
