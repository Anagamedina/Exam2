/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:08:21 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 11:12:38 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>



























 





char *ft_strdup(char *src)
{
    int i;
    char *dest;

    // Calcula la longitud de la cadena src
    i = 0;
    while (src[i] != '\0')
        i++;

    // Reserva memoria suficiente para la nueva cadena, incluyendo el carácter nulo
    dest = malloc(sizeof(char) * (i + 1));
    if (dest == NULL)
        return (NULL);  // Maneja el error de memoria

    // Copia la cadena src a dest
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Asegúrate de añadir el carácter nulo al final

    return (dest);
}

