#include "not.h"

void fillarray(float array[], int n) {
    srand(time(NULL));
    int x;
    array[0] = HEIGHT/2;
    for (int i=1; i<n; i++) {
        x = rand() % BUFFER;
        array[i] = x + array[i-1] - (BUFFER-1)/2;
    }
}

void change(float array[], int n, float factor) {
    float temp = array[0];
    float temp1;
    array[0] += factor*(array[1] - array[0]);
    for (int i=1; i<n-1; i++) {
        temp1 = array[i];
        array[i] += factor*(temp + array[i+1] - 2*array[i]);
        temp = temp1;
    }
    array[n-1] += factor*(temp - array[n-1]);
}