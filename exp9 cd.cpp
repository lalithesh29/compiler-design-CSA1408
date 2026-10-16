#include <stdio.h>

int main() {
    printf("Original Grammar:\nS -> (L) | a\nL -> L,S | S\n\n");
    printf("Grammar after Eliminating Left Recursion:\n");
    printf("S  -> (L) | a\n");
    printf("L  -> S L'\n");
    printf("L' -> , S L' | e\n");
    return 0;
}
