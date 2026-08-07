#include <stdio.h>
#include <time.h> // needed for clock_gettime

int main(int argc, char **argv) {
    struct timespec ts, start, stop, elapsed;

    clock_gettime(CLOCK_REALTIME, &ts);
    printf("Seconds since the epoch: %ld.%09ld\n", ts.tv_sec, ts.tv_nsec);

    clock_gettime(CLOCK_MONOTONIC, &start);
    for (int i = 0; i < 1000000000; i++);
    clock_gettime(CLOCK_MONOTONIC, &stop);

    // subtract the two timestamps: stop - start
    elapsed.tv_sec = stop.tv_sec - start.tv_sec;
    elapsed.tv_nsec = stop.tv_nsec - start.tv_nsec;

    if (elapsed.tv_nsec < 0) {
        elapsed.tv_sec--;
        elapsed.tv_nsec += 1000000000L;
    }

    printf("Busy loop took %ld.%09ld seconds\n",
        elapsed.tv_sec, elapsed.tv_nsec);

    return 0;
}