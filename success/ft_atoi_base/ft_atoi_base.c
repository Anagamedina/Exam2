/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:27:20 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 17:27:32 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;//Almacena el valor acumulado de la conversión.
	int sign = 1;
	int value;// Almacena temporalmente el valor numérico de cada carácter convertido.

	// Verificar que la base esté en el rango permitido (2 a 16)
	if (str_base < 2 || str_base > 16)
		return 0;

	// Ignorar espacios en blanco al principio de la cadena
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	// Manejar el signo
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}

	// Convertir cada carácter de la cadena a su valor correspondiente en la base dada
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			value = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			value = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			value = *str - 'A' + 10;
		else
			break;

		// Verificar si el valor es válido para la base dada
		if (value >= str_base)
			break;

		// Acumular el resultado
		result = result * str_base + value;
		str++;
	}

	return sign * result;
}
