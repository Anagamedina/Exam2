/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:35:20 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 00:11:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


char	*ft_itoa(int nbr)
{
    if (nbr == -2147483648)
        return("-2147483648\0");

    int n = nbr;
    int len = 0;
    char *result;

    while(nbr <= 0)
    {
        len++;
    }

    while(n)
    {
        n = n / 10;
        len++;
    }

    result = (char *)malloc(sizeof(char) * len + 1);
    if (result == NULL)
        return(NULL);
    result[len] = '\0';

    while(nbr == 0)
    {
        result[0] = '0';
        return (result);
    }
    while(nbr < 0)
    {
        result[0] = '-';
        nbr =  -nbr
    }

    while(nbr)
    {
        --len;
        result[len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return (result);

    

    

    
    

    
}
