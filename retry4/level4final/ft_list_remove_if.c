/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:06:54 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 00:14:53 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *tmp;
    t_list  *del;
    t_list  *prev;
    
    
    tmp = *begin_list;
    prev =  NULL;
    while(tmp)
    {
        if((cmp)(tmp->data, data_ref) == 0)
        {
            del = tmp;
            if(prev == NULL)
                *begin_list = tmp->next;
            else
                prev->next = tmp->next;
                free(del);
            
        }
        else
        {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}