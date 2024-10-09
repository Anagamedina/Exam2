/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:46:26 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/08 21:33:36 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//28/2 = 14 --->num / i 
//3*3*5*5*7*11*13
int main(int argc, char **argv)
{
    int i;
    int num;

    if (argc == 2)
    {
        i = 2;
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while( num >= i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                num = num / i;
                if (num > 1)
                    printf("*");
                
            }
            else
                i++;
        }
    }
    printf("\n");
    return(0);
}


























/*int main (int argc, char **argv)
{
    int i;
    int num = 0;
    if (argc == 2)
    {
        i = 2;
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while(num >= i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                num = num / i;
                if (num > 1)
                    printf("*");
            }
            else
                i++;
            
        }   
    }
    printf("\n");
    return (0);   
}*/