/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:35:30 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 18:39:38 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bits;
	int				i;

	i = 8;
	while (i--)
	{
		bits = (octet >> i & 1) + '0';
		write(1, &bits, 1);
	}
}
