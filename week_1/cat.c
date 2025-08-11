/*
Week 1: loops
*/
#include <cs50.h>
#include <stdio.h>

int get_int_value(void);
void meow(int n);

int main(void) {
    int times = get_int_value();
    meow(times);
}

int get_int_value(void) {
    int n;
    do {
       n = get_int("Enter a number: ");
    } while(n < 1);

    return n;
}

void meow(int n) {
    for (int i = 0; i < n; i++) {
        printf("meow\n");
    }
}
