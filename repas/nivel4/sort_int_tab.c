/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:12:28 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/02 19:39:31 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swapped = 1;

	while(swapped == 1)
	{
		i = 1;
		swapped = 0;
		while(i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				swap_values(&tab[1 - 1], &tab[i]);
				swapped = 1;
			}
			++i;
		}
	}
}
