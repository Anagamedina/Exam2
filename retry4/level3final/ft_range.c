/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 03:22:00 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 03:43:05 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len;
    int i;
    int *range;

    if(start < end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;
    
    range = (int *)malloc(sizeof(int) * len);
    if(!range)
        return(0);

    while(i < len)
    {
        if(start <= end)
        {
            while(start <= end)
            {
                range[i] = start;
                start++;
                i++;
            }
        }
        else
            while(start >= end)
            {
                range[i] = start;
                start--;
                i++;
                
            }
    }
    return(range)
}