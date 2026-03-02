//3D Array
//SUCCESS MWENDWA
//BCS-03-0046/2026

#include <stdio.h>
#include <stdlib.h>

int main() {
    int chain[3][5][10];
    int b, f, r;          
    int totalOccupied = 0;

    for (b = 0; b < 3; b++) {
        for (f = 0; f < 5; f++) {
            for (r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;

                if (chain[b][f][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}