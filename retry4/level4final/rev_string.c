/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:15:14 by anamedin          #+#    #+#             */
/*   Updated: 2024/10/08 20:27:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dst, char *src, int n)
{
    int i = 0;
    while(i < n && src[i])
    {
        dst[i] = src[i];
        i++;
        
    }
    dst[i] = '\0';
    return(dst);
}


char **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int wc = 0;
    int start;
    int end;
    char **out;

    while(str[i])
    {
        while(str[i] && (str[i] ==  ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while(str[i] && (str[i] !=  ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }

    out = (char **)malloc(sizeof(char **) * (wc + 1));
    if(!out)
        return (NULL);
    
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] ==  ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        start = i;
        while(str[i] && (str[i] !=  ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        end = i;

        if(start < end)
        {
            out[k] = (char *)malloc(sizeof(char *) * (end - start) + 1);
            ft_strncpy(out[k++], &str[start], (end - start));
        }
        
        
    }
    out[k] = NULL;
    return(out);
}

void put_str(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


void rev_string(char *str)
{
    char **words;
    int i = 0;
    words = ft_split(str);

    
    while(words[i])
    {
        i++;
    }
    
    if (i > 0)
    {
        while(--i >= 0)
        {
            put_str(words[i]);
            if (i > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        rev_string(argv[1]);
    }
    else
        write(1, "\n", 1);
    return(0);
}