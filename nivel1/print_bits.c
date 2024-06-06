/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:55:07 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/06 19:26:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_bits(unsigned char octet)
{
	int i = 7; // Iniciar con 7 para recorrer desde el bit más significativo (MSB)
	unsigned char bit;

	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--; // Decrementar el índice para avanzar al siguiente bit
	}
}

