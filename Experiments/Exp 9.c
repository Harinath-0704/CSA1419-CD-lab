#include <stdio.h>

int main() {
    printf("Original Grammar:\n");
    printf("L -> L,S | S\n\n");

    printf("Grammar after eliminating left recursion:\n");
    printf("L  -> S L'\n");
    printf("L' -> ,S L' | epsilon\n");

    return 0;
}
