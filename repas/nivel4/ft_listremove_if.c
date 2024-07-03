/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listremove_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:42:18 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/03 12:02:10 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


typedef struct _s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;
	t_list  *temp;

	if(begin_list == NULL || *begin_list == NULL)
		return;

	//ELiminar nodos al principio de la lista
	while(*begin_list && cmp((*begin_list) ->data, data_ref) == 0)
	{
		temp = *begin_list;//si es igual que data_ref se guarda en temp
		(*begin_list) = (*begin_list)->next;//se actualiza al siguiente nodo 
		free(temp); //y se libera temp
	}

	//si la lista esta vacia despues de eliminar nodos al prncipio 
	if(*begin_list  == NULL)
		return;

	prev = *begin_list; // se inicializa como elprimer nodo de la lista
	current = (*begin_list)->next;//se inicializa como siguiente o segundo 

	//recorrer y eliminar ndoos en el resto de la lista 
	
	while(current)
	{
		if(cmp(current->data, data_ref) == 0) //si el dato current es data_ref current debe eliminarse
		{
			prev->next = current->next;
			free(current);
			current = prev->next;
		}
		else
		{
			prev = current; // ssi n coincide se actualiza current para que apunte al siguiente nodo 
			current = current->next;
		}
	}
}
