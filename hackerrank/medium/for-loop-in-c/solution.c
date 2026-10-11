#include <stdio.h>

int main() {
    int a, b;

    /* Read the start and end of the interval */
    scanf("%d %d", &a, &b);

    /* Names for 1 to 9; index 0 is unused so that names[n] matches n */
    const char *names[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            /* 1 to 9: print the English word */
            printf("%s\n", names[n]);
        } else if (n % 2 == 0) {
            /* Greater than 9 and even */
            printf("even\n");
        } else {
            /* Greater than 9 and odd */
            printf("odd\n");
        }
    }

    return 0;
}
