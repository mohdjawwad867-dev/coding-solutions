#include <stdio.h>

int main() {
    int n;

    /* Read the single input integer */
    scanf("%d", &n);

    /* Names for 1 to 9; index 0 is unused so that names[n] matches n */
    const char *names[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        /* 1 to 9: print the English word */
        printf("%s\n", names[n]);
    } else {
        /* Anything larger than 9 */
        printf("Greater than 9\n");
    }

    return 0;
}
