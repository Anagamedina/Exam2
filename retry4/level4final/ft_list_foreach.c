/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:07:26 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/08 22:12:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *tmp;

    tmp = begin_list;

    while(tmp != NULL)
    {
        f(tmp->data);
        tmp = tmp->next;
    }
    
}