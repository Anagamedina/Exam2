/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:40:08 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 14:40:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
    // Una potencia de 2 tiene solo 1 bit establecido en su representación binaria.
    // Si restamos 1 de un número que es una potencia de 2, todos los bits a la derecha
    // del bit más significativo se vuelven 1.
    // Si hacemos un AND entre el número original y su número restado en uno, obtendremos 0
    // si es una potencia de 2 (ya que el único bit establecido se desactivará), de lo contrario,
    // será distinto de 0.
    // Por lo tanto, si el resultado de la operación AND es 0, el número es una potencia de 2.

    if (n == 0)
        return 0; // 0 no es una potencia de 2
    
    return (n & (n - 1)) == 0; // Devuelve 1 si es una potencia de 2, 0 en caso contrario
}

