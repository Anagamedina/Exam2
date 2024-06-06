/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:13:00 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 11:40:53 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char *ft_strpbrk(const char *s1, const char *accept)
{
    const char *a;

    // Recorrer cada carácter en s1
    while (*s1)
    {
        // Recorrer cada carácter en accept
        a = accept;
        while (*a)
        {
            // Si hay una coincidencia, retornar la posición actual en s1
            if (*s1 == *a)
                return (char *)s1;
            a++;
        }
        s1++;
    }
    // Si no se encuentra ninguna coincidencia, retornar NULL
    return (NULL);
}

/*char *ft_strpbrk(const char *s1, const char *accept)
{
    int i = 0;
    int j;

    // Recorrer cada carácter en s1
    while (s1[i] != '\0')
    {
        // Recorrer cada carácter en accept
        j = 0;
        while (accept[j] != '\0')
        {
            // Si hay una coincidencia, retornar la posición actual en s1
            if (s1[i] == accept[j])
                return (char *)&s1[i];
            j++;
        }
        i++;
    }
    // Si no se encuentra ninguna coincidencia, retornar NULL
    return (NULL);
}*/


int main()
{
    const char *str1 = "hello world";
    const char *accept = "oe";

    char *result = ft_strpbrk(str1, accept);
    if (result != NULL)
        printf("First matching character: %c\n", *result);
    else
        printf("No matching character found.\n");

    return 0;
}

