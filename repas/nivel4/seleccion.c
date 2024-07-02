/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seleccion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:22:10 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/02 19:39:37 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Algoritmo de Ordenamiento por Selección

	El algoritmo de ordenamiento por Selección funciona así:

    Encuentra el elemento más pequeño en la lista y colócalo
	al principio.
    Luego, encuentra el siguiente elemento más pequeño y colócalo
	en la segunda posición.
    Continúa haciendo esto para cada posición en la lista hasta que
	todos los elementos estén ordenados.   */

#include <stdio.h>

// Función para intercambiar dos elementos
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Función auxiliar para el algoritmo de ordenamiento por selección
void selectionSortRec(int arr[], int n, int i, int j, int min_idx) {
    if (i < n-1) {  // Verifica si hemos pasado por todos los elementos
        if (j < n) {  // Verifica si estamos en el final de la lista
            if (arr[j] < arr[min_idx]) {  // Encuentra el elemento más pequeño
                min_idx = j;
            }
            selectionSortRec(arr, n, i, j+1, min_idx);  // Mueve al siguiente elemento
        } else {
            swap(&arr[min_idx], &arr[i]);  // Coloca el elemento más pequeño en su lugar correcto
            selectionSortRec(arr, n, i+1, i+2, i+1);  // Pasa al siguiente elemento
        }
    }
}

// Función principal del algoritmo de ordenamiento por selección
void selectionSort(int arr[], int n) {
    selectionSortRec(arr, n, 0, 1, 0);
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array original: \n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Array ordenado por selección: \n");
    printArray(arr, n);
    return 0;
}

