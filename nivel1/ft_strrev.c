/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:45:58 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 12:45:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int i = 0;
    int length = 0;
    char temporary;

    // Calcular la longitud de la cadena
    while (str[length])
        length++;

    // Invertir la cadena
    while (i < length / 2)
    {
        temporary = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temporary;
        i++;
    }

    return str;
}

