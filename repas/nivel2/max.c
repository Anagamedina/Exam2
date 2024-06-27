/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:23:30 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/26 18:31:58 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int max;
	unsigned int i;

	i = 0;
	if(len == 0)
		return(0);
	max = tab[i];
	while(i < len)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return max;
}

int main()
{
	int init[] = {1, 3, 2, 10, 9};
	printf("%d", max(init, 5));
}
