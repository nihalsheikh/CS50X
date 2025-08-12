// PSET 1: Cash
// print the min coins needed to make the given amount of change in cents
// cents available: 25c, 10c, 5c, 1c and 1$ = 100cents
#include <cs50.h>
#include <stdio.h>

int input_change(void);

int calculate_cents(int cents);

int main(void)
{
    int dollars = input_change();
    int change = calculate_cents(dollars);
    printf("%i\n", change);
}

int calculate_cents(int dollars)
{
    int cents = dollars;
    int coins = 0;

    // total cents / 25 cent = how many 25cents to give back or count the coins to give back
    coins += cents / 25;
    // update the cents to the new remainder of of previously dividing with 2 cent
    cents %= 25;

    // calculating the above logic for other cents remianing: 10c, 5c, 1c
    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    // remianing all others are cents which can't be further divided
    coins += cents;

    return coins;
}

int input_change(void)
{
    int n;
    do
    {
        n = get_int("Change Owed: ");
    }
    while (n < 0);

    return n;
}
