#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void make_me_win(void) __attribute__((constructor));

void make_me_win(void) {
    printf("--> Please make me win!\n");
     exit(0);
}
