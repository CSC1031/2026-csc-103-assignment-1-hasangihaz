#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mathMark=0;
    int scienceMark=0;
    int englishMark=0;
    int total=0;
    float average=0;



    printf("Enter mathematics mark:\n");
    scanf("%d",&mathMark);

    printf("Enter science mark:\n");
    scanf("%d",&scienceMark);

    printf("Enter English mark:\n");
    scanf("%d",&englishMark);

    total=mathMark+scienceMark+englishMark;

    average= total/3.0f;

    if (average >= 80 && average <= 100)
    {
        printf("Grade=A\n");
    }
    else if (average >= 70 && average <= 79)
    {
        printf("Grade=B\n");
    }
    else if (average >= 60 && average <= 69)
    {
        printf("Grade=C\n");
    }
    else if (average >= 50 && average <= 59)
    {
        printf("Grade=D\n");
    }
    else
    {
        printf("Grade=F\n");
    }

    if (total >= 40)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;
}
