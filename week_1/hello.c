/* Week 1: First C Program */
#include <cs50.h>
#include <stdio.h>

int main(void) {
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}
