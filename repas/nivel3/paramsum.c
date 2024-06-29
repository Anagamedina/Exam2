/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:42:06 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 14:48:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}


/* Recursividad: La recursividad permite manejar i
 * números de cualquier tamaño, dividiendo el problema
 * en subproblemas más pequeños hasta llegar al caso base (n < 10).  */
