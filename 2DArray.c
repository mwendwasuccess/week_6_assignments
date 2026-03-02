//2D Array
//SUCCESS MWENDWA
//BCS-03-0046/2026

#include <stdio.h>
#include <stdlib.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    srand(1);

    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n",
               i + 1, occupied, vacant);
    }

    return 0;
}