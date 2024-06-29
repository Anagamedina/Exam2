/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:52:00 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 15:04:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("\n");
        return 0;
    }

    // Convertir los argumentos de entrada a enteros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calcular el MCD usando la función gcd
    int result = gcd(num1, num2);

    // Mostrar el resultado del MCD seguido de una nueva línea
    printf("%d\n", result);

    return 0;
}

/*Algoritmo de Euclides para el MCD:

El algoritmo de Euclides se basa en la siguiente propiedad matemática:

    Si a y b son dos números enteros, donde a >= b, entonces:
    MCD(a,b)=MCD(b,a%b)
    MCD(a,b)=MCD(b,a%b)
    Este proceso se repite hasta que b sea igual a 0. En ese punto, a contendrá el MCD deseado.  */
