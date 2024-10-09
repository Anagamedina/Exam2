/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:36:44 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 02:44:46 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void    print_hex(int num)
{
    char str[] =  "0123456789abcdef";
    if(num > 16)
        print_hex(num / 16);
    write(1, &str[num % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_hex(ft_atoi(argv[1]));
        
        
    }
    write(1, "\n", 1);
}