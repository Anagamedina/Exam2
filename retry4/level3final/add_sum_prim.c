/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_sum_prim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:17:08 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 00:48:11 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_prim(int num)
{
    int i;
    if(num <= 1)
        return(0);
    i = 2;
    while(i * i <= num )
    {
        if(num % i == 0)
            return(0);
        i++;
    }
    return(1);
    
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' && str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >=  '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(sign + result);   
}

void put_nbr(int num)
{
    char str[10] = "0123456789";
    if(num > 9)
    {
        put_nbr(num / 10);
    }
    write(1, &str[num % 10], 1);
}

int main(int argc, char **argv)
{
    int num;
    int sum;
    
    if(argc == 2)
    {
        num = ft_atoi(argv[1]);
        sum = 0;
        while(num > 0)
        {
            if (ft_is_prim(num))
                sum = sum + num;
            num--;
        }
        put_nbr(sum);
    }
    else
        put_nbr(0);
    write(1, "\n", 1);
    return(0);
}