/*
Week 1: Compare Values
*/
#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("Enter x: ");
    int y = get_int("Enter y: ");

    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is not less than y\n");
    }
}
