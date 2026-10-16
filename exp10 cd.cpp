#include <stdio.h>

int main() {
    printf("Original Grammar:\nS -> iEtS | iEtSeS | a\nE -> b\n\n");
    printf("Grammar after Eliminating Left Factoring:\n");
    printf("S  -> iEtS S' | a\n");
    printf("S' -> eS | e\n"); // 'e' represents epsilon
    printf("E  -> b\n");
    return 0;
}
