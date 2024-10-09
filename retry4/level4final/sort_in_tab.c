/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:42:03 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/08 23:51:30 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int         swap;

    i = 0;
    while(i < (size -1))
    {
        if(tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else
            i++;
    }
}























/*void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int         swap;

    i = 0;
    while(i < size -1)
    {
        if (tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        i++;
    }
}*/
