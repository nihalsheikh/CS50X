// Week 1: PSET 1
// take user input for their name, and print hello, {name}\n
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
