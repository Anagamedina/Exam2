/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:30:28 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 00:11:51 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void flood(char **tab, t_point size, int x, int y, char to_fill)
{
    if (x < 0 || y < 0)
        return ;
    if (x == size.x || y == size.y)
        return ;
    if (tab[y][x] != to_fill)
        return ;
    if (tab[y][x])
        tab[y][x] = 'F';
    flood(tab, size, x + 1, y, to_fill);
    flood(tab, size, x - 1, y, to_fill);
    flood(tab, size, x, y + 1, to_fill);
    flood(tab, size, x, y - 1, to_fill);
    
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    int x;
    int y;
    char to_fill;
    
    x = begin.x;
    y = begin.y;
    to_fill = tab[y][x];

    flood(tab, size, x, y, to_fill);
}