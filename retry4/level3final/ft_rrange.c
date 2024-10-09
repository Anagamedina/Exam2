/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 03:22:57 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 03:43:02 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len;
    int i;
    int *rrange;
    
    if(start < end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;
        
    rrange = malloc(sizeof(int) * len);
    if(!rrange)
        return(0;
    hile(i < len)
    {
        if(start <= end)
        {
            while(end >= start)
            {
                rrange[i] = end;
                i++;
                end--;
            }
        }
        else
        {
            while(end <= start)
            {
                rrange[i] = end;
                i++;
                end++;
            }
        }
    }
    return(rrange);
    
}
