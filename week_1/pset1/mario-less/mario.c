// PSET 1: Mario-less
// recreate the mario pyramid stairs using #
#include <cs50.h>
#include <stdio.h>

int get_height(void);

void print_pyramid(int bricks);

int main(void)
{
    // Provide height of pyramid
    int height = get_height();

    print_pyramid(height);
}

// get columns in row
void print_pyramid(int height)
{
    // print the row of pyramid
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < (height - i) - 1; j++)
        {
            printf(" ");
        }

        // print bricks
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // new line
        printf("\n");
    }
}

// user input
int get_height(void)
{
    int h;
    do
    {
        h = get_int("Enter height: ");
    }
    while (h < 1 || h > 8);

    return h;
}
