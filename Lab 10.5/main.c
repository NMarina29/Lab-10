#include <stdio.h> //???????????? ????/????? ?? ?????
#include <locale.h> //????????? ??????????? ??? ??????????? ??????????? ?? ??????

int main()
{
    char* locale = setlocale(LC_ALL, ""); //??????????? ??????? ??????????? ???????????

    int A;
    printf("A:");
    scanf_s("%i", &A);

    if (A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100)
    {
        printf("???????????? ???????"); // ????? ??????
    }

    else
    {
        printf("???????????? ?????");
    }

    return 0; //??????? ?????????????? ???????? ????? ??????????? ???????
}