#include <stdio.h>

int main() {
    // ANSI escape codes for colors
    printf("\033[1;31m"); // Red
    printf("Hello, ");
    printf("\033[1;32m"); // Green
    printf("World");
    printf("\033[1;34m"); // Blue
    printf("!\n");
    printf("\033[0m"); // Reset color

    return 0;
}
