#include <stdio.h>

int main(void) {
    int x = 10;
    char *sign = (x > 0) ? "positive" : "non-positive";

    printf("%d is %s\n", x, sign);

    return 0;
}