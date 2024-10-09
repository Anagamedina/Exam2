/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 03:06:16 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 03:16:01 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void gdc(int a, int b)
{
   int temp;
   
   while(b != 0)
   {
    temp = b;
    b = a % b;
    a = temp;
   } 
   return(a);
}


int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int num1 =  atoi(argv[1]);
        int num2 =  atoi(argv[2]);
        int result = gcd(num1, num2);

        printf("%d\n", result);
    }
    write(1, "\n", 1);
    return(0);
}