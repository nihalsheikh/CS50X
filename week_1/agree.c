/*
Week 1: Logical Operators
*/
#include <cs50.h>
#include <stdio.h>


int main(void) {
    char c = get_char("Do you agree to T&C? ");
    if (c == 'y' || c == 'Y') {
        printf("Agreed\n");
    }
    else if (c == 'n' || c == 'N') {
        printf("Not agreed\n");
    }
}
