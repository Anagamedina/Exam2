/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:20:48 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/02 19:21:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Algoritmo de Ordenamiento Burbuja

	El algoritmo de ordenamiento Burbuja funciona así:

    Compara el primer par de elementos en la lista.
	Si el primer elemento es mayor que el segundo, intercámbialos.
    Luego, pasa al siguiente par de elementos
	(el segundo y el tercero)
	y haz lo mismo.
    Continúa haciendo esto hasta que llegues al final de la lista.
    Vuelve al principio de la lista y repite el proceso, ignorando el
	último elemento ya que ya está en su lugar correcto.
    Repite estos pasos hasta que la lista esté ordenada.    */




// Función para intercambiar dos elementos
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Función auxiliar para el algoritmo de ordenamiento burbuja
void bubbleSortRec(int arr[], int n, int i, int j) {
    if (i < n-1) {  // Verifica si hemos pasado por todos los elementos
        if (j < n-i-1) {  // Verifica si estamos en el último par de elementos
            if (arr[j] > arr[j+1]) {  // Si el elemento es mayor que el siguiente, intercámbialos
                swap(&arr[j], &arr[j+1]);
            }
            bubbleSortRec(arr, n, i, j+1);  // Mueve al siguiente par
        } else {
            bubbleSortRec(arr, n, i+1, 0);  // Vuelve al principio para la siguiente iteración
        }
    }
}

// Función principal del algoritmo de ordenamiento burbuja
void bubbleSort(int arr[], int n) {
    bubbleSortRec(arr, n, 0, 0);
}

// Función para imprimir un array
void printArray(int arr[], int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array original: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array ordenado por burbuja: \n");
    printArray(arr, n);
    return 0;
}

