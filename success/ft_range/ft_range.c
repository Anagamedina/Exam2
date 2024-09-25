/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:42:18 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 19:44:20 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int len;
    int *range;
    int i;

    i = 0;
    len = 0;
    if (start < end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;
    range = malloc(sizeof(int) * len);
    if (!range)
        return (0);
    if (start <= end)
    {
        while (start <= end)
        {
            range[i] = start;
            i++;
            start++;
        }
    }
    else
    {
        while (start >= end)
        {
            range[i] = start;
            i++;
            start--;
        }
    }
    return (range);
}

