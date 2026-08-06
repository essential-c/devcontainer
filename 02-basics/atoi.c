#include <stdio.h>
#include <stdlib.h>

// Sum the two integers passed as command line parameters
int main(int argc, char *argv[]) {
    int a, b;

    // Once again, dangerous!
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d + %d = %d\n", a, b, a+b);

    return 0;
}
