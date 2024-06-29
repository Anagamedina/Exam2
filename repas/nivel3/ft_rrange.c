/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:47:26 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 13:00:37 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size;
	int *res;
	int i;

	size = abs((end - start)) + 1;

	res = malloc(size * sizeof(int));
	if(!res)
		return(NULL);

	i = 0;
	if(start <= end)
	{
		while(end >= start)
		{
			res[i] = end;
			end--;
			i++;
		}
	}else
	{
		while(end <= start)
		{
			res[i] = end;
			end++;
			i++;
		}
	}


	return(res);
}
