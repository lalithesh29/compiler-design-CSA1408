#include <stdio.h>

int main() {
    printf("FIRST(A) = { # }\n"); // # represents epsilon
    printf("FIRST(B) = { # }\n");
    printf("FIRST(S) = { a, b }\n"); // Since A-># and B->#, S yields 'a' or 'b'
    return 0;
}
