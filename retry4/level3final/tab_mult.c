/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:51:00 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 01:54:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(sign * result);  
}


void ft_putnbr(int num)
{
    char str[10] = "0123456789";
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &str[num % 10], 1);    
}

int main(int argc, char **argv)
{
         int num ;
         int i;
         
         if(argc == 2)
         {
            num = ft_atoi(argv[1]);
            i = 1;
            while(i <= 9)
            {
                ft_putnbr(i);
                write(1, " x ", 3);
                ft_putnbr(num);
                write(1, " = ", 3);
                ft_putnbr(i * num);
                write(1, "\n", 1);
                i++;
            }
            
         }
         write(1, "\n", 1);
         return(0);
}