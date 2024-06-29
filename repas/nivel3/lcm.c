/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:39:39 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/29 14:41:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b);

unsigned int lcm(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0)
        return 0; // Si uno de los números es cero, el LCM es cero

    unsigned long long product = (unsigned long long)a * b; // Multiplicación segura para evitar desbordamiento
    unsigned int gcd_value = gcd(a, b);
    
    // Calcular LCM usando la fórmula LCM(x, y) = | x * y | / GCD(x, y)
    unsigned int lcm_value = (unsigned int)(product / gcd_value);
    
    return lcm_value;
}

unsigned int gcd(unsigned int a, unsigned int b) {
    unsigned int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned int num1 = 12;
    unsigned int num2 = 18;
    unsigned int result = lcm(num1, num2);

    printf("LCM of %u and %u is: %u\n", num1, num2, result);

    return 0;
}

