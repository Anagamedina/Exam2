/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:43:47 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/03 17:11:43 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void swap_values(t_list *a, t_list *b)
{
	int swap;

	swap = a->data;
	a->data = b->data;
	b->data = swap;
}


t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swapped = 1;
	t_list *cur = lst;

	while(swapped == 1) //hasta que no se realicen intercambios 
	{
		swapped = 0; //reiniciamos la flag en cada iteracion 
		//comparacion y posible intercambio

		while(cur != 0 && cur->next != 0)
		{
			if(cmp(cur->data, cur->next->data) == 0) //comparar los datos del primero y el segundo 
													 //si es = 0 no esta
													 //ordenado correctamente 
			{
				swap_values(cur, cur->next);//para intercambiar los datos de los nodos
				swapped = 1;//se establece en 1 paara indicar que se ha hecho un cambio 
			}
			cur = cur->next; //avanzamos al sieguinte en la lista 
		}
		cur = lst; //reinicimaos para apuntar neuvamente al inicio de la lista (lst)
	}
	return(lst);//devolvemos el puntero al primer nodo de la lista ordenada/
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (t_list*)malloc(sizeof(t_list));
	if(!new_nodo)
		return(NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return(new_nodo);
}

int ascending(int a, int b)
{
	return(a <= b);
}

void print_list(t_list *lst)
{
	while(lst != NULL)
	{
		printf("%s ->", lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int main()
{
	//crear nodos 
	t_list *lista = ft_lstnew("");
	t_list *node1 = ft_lstnew("10");
	t_list *node2 = ft_lstnew("25");
	t_list *node3 = ft_lstnew("40");
	t_list *node4 = ft_lstnew("75");

	//conectar nodos
	lista->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	//imprimir la lista
	t_list *tmp;
	while (lista != NULL)
	{
		tmp = lista;
		lista = lista->next;
		free(tmp);
	}
	return(0);
}
