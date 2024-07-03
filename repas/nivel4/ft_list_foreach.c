/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:18:52 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/03 10:39:53 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_list
{
	void			*data;
	struct s_list	*next;

}					t_list;


/************************************/
/*Una struct (estructura) en C es un tipo de dato compuesto
 * que permite agrupar variables de diferentes
 * tipos bajo un mismo nombre. 
 * struct Persona {
    char nombre[50];
    int edad;
    float altura;
};
*/
/*typedef en C se utiliza para crear un alias para otro tipo de dato 
 * una lista es una colección ordenada de elementos,
 * donde cada elemento puede ser de cualquier tipo de dato, y los elementos pueden repetirse. */



/*listas enlazadas: Son una forma específica de lista 
 * en la que cada elemento (nodo) contiene un valor y una
 * referencia al siguiente nodo en la secuencia*/

/*Estructura (struct): Se utiliza para agrupar
 * variables de diferentes tipos que están relacionadas.
 * Facilita la organización de datos complejos.
Lista Enlazada: Es una estructura de datos que permite
almacenar una secuencia de elementos de forma dinámica,
facilitando la inserción y eliminación de elementos */

#include <unistd.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while(tmp != NULL)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
