#include <stdio.h>

int main(int argc, char **argv) {
    int my_array[4];
    int array2d[3][2];

    for (int i=0; i<4; i = i +1) {
        my_array[i] = 100 + i;
        printf("my_array[%d] contains: %d\n", i, my_array[i]);
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            array2d[i][j] = i*j;
            printf("array2d[%d][%d] contains: %d\n", i, j, array2d[i][j]);
        }
    }

    return 0;
}
