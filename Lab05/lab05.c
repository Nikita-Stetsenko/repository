#include<stdio.h>

int cycleFor(int x, int y);
int cycleWhile(int x, int y);
int cycleDoWhile(int x, int y);

int main()
{
    int x, y;

    printf("Enter the first number: ");
    scanf_s("%d", &x);
    printf("Enter the second number: ");
    scanf_s("%d", &y);

    int nod1, nod2, nod3;
    nod1 = cycleFor(x, y);
    nod2 = cycleWhile(x, y);
    nod3 = cycleDoWhile(x, y);

    printf("NOD1 = ");
    printf("%d\n", nod1);

    printf("NOD2 = ");
    printf("%d\n", nod2);

    printf("NOD3 = ");
    printf("%d\n", nod3);

    return 0;
}

int cycleFor(int x, int y)
{
    int nod1 = x;
    for (int i = x; i > 0; i--)
    {
        if (x == 0 && y == 0);
        {
            nod1 = i;
        }
    }
    return nod1;
}

int cycleWhile(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}

int cycleDoWhile(int x, int y)
{
    do {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    } while (x != y);

    return x;
}