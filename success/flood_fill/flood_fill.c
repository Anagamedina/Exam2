/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:32:56 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 10:46:32 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>


void flood(char **tab, t_point size, int x, int y, char to_fill)
{
	if(x < 0 || y < 0)
		return ;
	if(x == size.x || y == size.y)
		return ;
	if(tab[y][x] != to_fill)
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
