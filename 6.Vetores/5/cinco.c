#include <math.h>
#include <stdio.h>
/**
    5.  Faça um programa para resolver o seguinte problema:
    São dadas as coordenadas reais x e y de um ponto, um número natural n, e as coordenadas reais de n pontos (1 < n < 100).
    Deseja-se calcular e imprimir sem repetição os raios das circunferências centradas no ponto (x,y) que passam
    por pelo menos um dos n pontos dados.

    Exemplo : (x,y) = (1.0, 1.0) ; n = 5
    pontos : (-1.0, 1.2) , (1.5, 2.0) , (0.0, -2.0) , (0.0, 0.5) , (4.0, 2.0)
    Nesse caso há três circunferências de raios: 1.12,  2.01 e 3.162.
    Observações:
    Distância entre os pontos (a,b) e (c,d) é raiz^((a-c)^2 + (b-d)^2)
    Dois pontos estão na mesma circunferência se estão à mesma distância do centro.
*/
void swap(float*, float*);
int partition(float*, int, int);
void quicksort(float*, int, int);
int main() {
    float x, y;
    int n;
    scanf("%f %f", &x, &y);
    scanf("%d", &n);
    float dist[n];
    for (int i = 0; i < n; ++i) {
        float a, b;
        scanf("%f %f", &a, &b);
        dist[i] = sqrtf((a-x)*(a-x) + (b-y)*(b-y));
    }
    quicksort(dist, 0, n-1);
    for (int i = 0; i < n;) {
        const float atual = dist[i];
        printf("%.3f ", atual);
        while (atual == dist[i]) i++;
    }
    return 0;
}
void swap(float *x, float *y) {
    const float temp = *x;
    *x = *y;
    *y = temp;
}
int partition(float *arr, const int left, const int right) {
    int i = left-1;
    for (int j = left; j <= right; ++j) {
        if (arr[j] < arr[right])
            swap(&arr[j], &arr[++i]);
    }
    swap(&arr[right], &arr[i+1]);
    return i+1;
}
void quicksort(float *arr, const int left, const int right) {
    if (left < right) {
        const int pivot = partition(arr, left, right);
        quicksort(arr, left, pivot-1);
        quicksort(arr, pivot+1, right);
    }
}