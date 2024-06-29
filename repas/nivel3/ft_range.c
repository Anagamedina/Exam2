/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:14:18 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 12:47:17 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int size;
	int *res;
	int i;

	size = abs((end - start)) + 1;
	res = malloc (size * sizeof(int));
	if (!res)
		return(NULL);

	i = 0;

	if(start < end)
	{
		while(start <= end)
		{
			res[i] = start; //asigna el valor actual de start en la posición i del array.
			start ++;
			i++;//incrementa i para apuntar a la siguiente posición del array.
		}

	}
	else
	{
		while(start >= end) //start empieza en 5 y end es 1.
		{
			res[i] = start;//En la primera iteración: res[i] = 5, luego start se decrementa a 4.
			i++;
			start--;
		}
	}
	return(res);
}


/*se realiza para cumplir con el requerimiento de 
 * llenar el array con valores descendentes cuando start es mayor que end.
 * Esto asegura que el array contenga todos los valores
 * consecutivos desde start hasta end  */
