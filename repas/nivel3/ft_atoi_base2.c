/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:29:15 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/27 00:34:39 by anamedin         ###   ########.fr       */
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

// Función principal para pruebas
int main()
{
	const char *str = "12fdb3";
	int base = 16;
	int result = ft_atoi_base(str, base);
	printf("El resultado es: %d\n", result); // El resultado es: 1247283
	return 0;
}


/*Convierte cada carácter a su valor numérico correspondiente:
'0' a '9' se convierten restando '0'.
'a' a 'f' se convierten restando 'a' y sumando 10.
'A' a 'F' se convierten restando 'A' y sumando 10



Si el valor del carácter convertido es mayor o igual a la base, se detiene la conversión


'1' se convierte en 1.
'2' se convierte en 2.
'f' se convierte en 15.
'd' se convierte en 13.
'b' se convierte en 11.
'3' se convierte en 3.
Acumulación del resultado:

result = 1 * 16 + 2 = 18
result = 18 * 16 + 15 = 303
result = 303 * 16 + 13 = 4861
result = 4861 * 16 + 11 = 77787
result = 77787 * 16 + 3 = 1247283*/
