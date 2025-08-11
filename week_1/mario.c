// Week 1: nested loops
#include <cs50.h>
#include <stdio.h>

void get_wall(int n);

int main(void) {
    int n = get_int("Enter a number: ");

    // Method 1: mario wall
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < n; i++) {
        get_wall(n);
    }
}

void get_wall(int n) {
    for (int i=0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}
