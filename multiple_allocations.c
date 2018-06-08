#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

void big_allocation() {
    int *p, size = 100000000;
    static struct timeval t1, t2, t;

    gettimeofday(&t1, NULL);
    p = malloc(size * sizeof(int));
    free(p);
    gettimeofday(&t2, NULL);
    timersub(&t2, &t1, &t);
    printf("Time elapsed in big_allocation(): %ld.%06ld\n", (long)t.tv_sec, (long)t.tv_usec);
}

int main (void) {
    big_allocation();
    return 0;
}

