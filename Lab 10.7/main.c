#include <stdio.h> //???????????? ????/????? ?? ?????
#include <locale.h> //????????? ??????????? ??? ??????????? ??????????? ?? ??????

int main()
{
    char* locale = setlocale(LC_ALL, ""); //??????????? ??????? ??????????? ???????????

    float a, b, c;
    printf("????? a:");
    scanf_s("%f", &a);

    printf("????? b:");
    scanf_s("%f", &b);

    printf("????? c:");
    scanf_s("%f", &c);

    if ((a < b + c) & (b < a + c) & (c < a + b))
    {
        printf("???????????? ???????"); // ????? ??????
    }

    else
    {
        printf("???????????? ?????");
    }

    return 0; //??????? ?????????????? ???????? ????? ??????????? ???????
}