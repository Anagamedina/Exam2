/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:14:01 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/08 22:14:08by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;

}					t_list;


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swap;

    tmp = lst;
    while(lst != NULL, lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0);
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
        {
            lst = lst->next;
        }
    }
    return(tmp);
}
