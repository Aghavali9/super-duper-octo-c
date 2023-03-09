#include <stdio.h>

enum Suit {
    HEARTS = 3,
    DIAMONDS = 4,
    CLUBS = 5,
    SPADES = 6
};

int main() {
    enum Suit card_suit = DIAMONDS;
    printf("The card suit is: %c\n", card_suit);
    return 0;
}
