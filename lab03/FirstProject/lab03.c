void Degree4();
void Degree6();
void Degree8();
void Degree10();

int main()
{
    Degree4();
    Degree6();
    Degree8();
    Degree10();

    return 0;
}

void Degree4()
{
    int first;
    printf("A number to the 4th power:\n");
    scanf("%d", &first);

    first *= first;
    first *= first;

    printf("%d\n", first);

}

void Degree6()
{
    int first, second, three;
    printf("A number to the 6th power:\n");
    scanf("%d", &first);

    second = first * first;
    three = second * second;
    first = three * second;

    printf("%d\n", first);

}

void Degree8()
{
    int first, second;
    printf("A number to the 8th power:\n");
    scanf("%d", &first);

    second = first * first;
    second = second * second;
    first = second * second;

    printf("%d\n", first);
}

void Degree10()
{
    int first, second, three, four;
    printf("A number to the 8th power:\n");
    scanf("%d", &first);

    second = first * first;
    three = second * second;
    four = three * three;
    first = four * second;

    printf("%d\n", first);
}
