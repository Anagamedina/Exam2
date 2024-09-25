/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:47:30 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 21:02:51 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int len;
    int *rrange;

    len = 0;
    if (start < end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;

    rrange = malloc(sizeof(int) * len);
    if (!rrange)
        return (0);

    i = 0;
    if (start <= end)
    {
        while (end >= start)
        {
            rrange[i] = end;
            i++;
            end--;
        }
    }
    else
    {
        while (end <= start)
        {
            rrange[i] = end;
            i++;
            end++;
        }
    }

    return (rrange);
}

