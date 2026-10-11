#include <stdio.h>

/**
 * Returns the greater of two integers.
 */
int max(int x, int y) {
    return (x > y) ? x : y;
}

/**
 * Returns the greatest of four integers.
 * Compares (a, b) and (c, d) first, then compares the two winners.
 */
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d\n", max_of_four(a, b, c, d));

    return 0;
}
