/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:44:51 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/27 00:28:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	// Ignorar espacios en blanco y caracteres de control
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign  = -1;
	if(*str == '-' || *str == '+')
		sign++;
	// Convertir los caracteres numéricos a entero
	while (*str >= '0' && *str <= '9')
	{
		result = result *10 + *str - '0';
		str++;
	}
	return(sign *result);
}

int is_prime(int num)
{
	int i;

	
	if(num <= 1) // Números menores o iguales a 1 no son primos
		return(0);
	i = 2;
	while (i * i <= num)
	{
		if(num % i == 0) //verificar si num es divisible entre i
			return(0);// No es primo si tiene algún divisor diferente de 1 y sí mismo
		++i;
	}
	return(1);
}

// Función para imprimir un número
void put_nbr(int n)
{
	char digit;

	if(n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
	int nbr;
	int sum;

	if(argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		sum = 0;
		while(nbr > 0)
		{
			if(is_prime(nbr))
				sum += nbr;// Suma los números primos
			nbr--;
		}
		put_nbr(sum);
	}
	else // Si no hay exactamente un argumento, imprime 0
		put_nbr(0);
	write(1, "\n", 1);
	return(0);
}
