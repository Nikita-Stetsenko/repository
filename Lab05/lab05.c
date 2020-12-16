#include<stdio.h>

int main()
{
    int x, y;

    printf_s("Enter the first number: ");
    scanf_s("%d", &x);
    printf_s("Enter the second number: ");
    scanf_s("%d", &y);

    int i, NOD1, NOD2, NOD3;
    for (i = x; i > 0; i--);
    if (x == 0 && y == 0);
    NOD1 = i;

    printf_s("NOD1 = ");
    printf_s("%d\n", NOD1);

    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    NOD2 = x;

    printf_s("NOD2 = ");
    printf_s("%d\n", NOD2);

    do {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    } while (x != y);
    NOD3 = x;

    printf_s("NOD3 = ");
    printf_s("%d\n", NOD3);

    return 0;
}