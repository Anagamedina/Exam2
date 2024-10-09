/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:57:18 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 02:17:53 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void str_capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    int i;
    if(argc < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while(i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);    
}