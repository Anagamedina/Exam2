/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:41:16 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/08 13:41:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet) {
    unsigned char reversed = 0;
    int i = 8;
    while (i > 0) {
        reversed = (reversed << 1) | (octet & 1);
        octet >>= 1;
        i--;
    }
    return reversed;
}

