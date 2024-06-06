/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:46:12 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/05 13:07:37 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t custom_strspn(const char *str1, const char *str2) {
    size_t length = 0;
    int i = 0;

    while (str1[i] != '\0') {
        int j = 0;

        while (str2[j] != '\0') {
            if (str2[j] == str1[i])
                break;
            j++;
        }

        if (str2[j] == '\0')
            break;

        length++;
        i++;
    }

    return length;
}

int main() {
    const char *str1 = "hello123";
    const char *str2 = "abcdefghijklmnopqrstuvwxyz";

    size_t length = custom_strspn(str1, str2);

    printf("Longitud del prefijo: %zu\n", length);

    return 0;
}


