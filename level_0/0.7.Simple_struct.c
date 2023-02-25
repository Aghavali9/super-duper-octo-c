#include <stdio.h>

typedef struct rect_tag{
    int left;
    int right;
    int bottom;
    int top;
}rect_t;


int main() {
    rect_t my_rect;
    my_rect.bottom = 1;
    my_rect.top = 4;
    my_rect.left = 3;
    my_rect.right = 9;

    printf("My rectangle coordinates are:\n"
           "top-left: (%d,%d)\n",my_rect.left, my_rect.top);
    printf("bottom-left: (%d,%d)\n", my_rect.left, my_rect.bottom);
    printf("bottom-right: (%d,%d)\n", my_rect.right, my_rect.bottom);
    printf("top-right: (%d,%d)\n", my_rect.right, my_rect.top);
    return 0;
}
