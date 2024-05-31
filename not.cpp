#include "not.h"


int main() {
    initCanvas("Thermal Conductivity Simulator", WIDTH, HEIGHT);
    float array[N];
    Line larray[N-1];
    // Line l(0, 0, 0, 0);
    // l.reset(0, HEIGHT/2, WIDTH, HEIGHT/2);
    // l.imprint();

    fillarray(array, N);
    for(int i=0; i<N-1; i++) {
        Line l1(i*DX, array[i], i*DX + DX, array[i+1]);
        larray[i] = l1;
    }

    for (int t=0; t<ITER; t++) {
        change(array, N, FACTOR);
        for(int i=0; i<N-1; i++) {
            larray[i].reset(i*DX, array[i], i*DX + DX, array[i+1]);
        }
    }

    wait(WAIT_TIME);
}