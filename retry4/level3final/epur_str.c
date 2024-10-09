/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:18:57 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/09 02:35:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int flag;

    flag = 0;
    if (argc == 2)
    {
        i = 0;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i])
        {
            if(argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            else
            {
                if(flag)
                    write(1, " ", 1);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}