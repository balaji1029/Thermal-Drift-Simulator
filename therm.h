#ifndef THERM_H
#define THERM_H

#include <iostream>

const int WIDTH = 1000;
const int HEIGHT = 1000;
const int N = 101;
const float DX = WIDTH/(N-1);
const int BUFFER = 51;
const int ITER = 100000;
const float FACTOR = 0.4;
const int WAIT_TIME = 5;

void fillarray(float[], int);

void change(float[], int, float);

#endif