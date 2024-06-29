/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:04:57 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 15:12:28 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int		ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);//Recursivamente llama a print_hex con el cociente de n dividido por 16
	write(1, &hex_digits[n % 16], 1);//imprimir el carácter hexadecimal correspondiente al residuo de n dividido por 16
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));

	write(1, "\n", 1);
}


















/*print_hex toma un número entero como argumento y
 * convierte ese número a su representación hexadecimal 
 * utilizando un bucle while.
Utiliza un array hex_digits que contiene los dígitos
hexadecimales de '0' a 'f'.
Los dígitos hexadecimales se construyen almacenando
los residuos de las divisiones sucesivas por 16 y luego
imprimiéndolos en orden inverso  */

