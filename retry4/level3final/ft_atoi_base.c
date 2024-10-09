/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:47:38 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 03:04:31 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int result;
    int value;
    int i;
    int sign = 0;
    
    if(str_base < 2  || str_base > 16)
        return(0);
    
    while(str[i] == ' '  || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            value = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            value = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            value = str[i] - 'A' + 10;
        else
            break;
        if(value >= str_base)
            break;
        
        result = result * str_base + value;
        i++;    
    }
    return(sign * result);    
}