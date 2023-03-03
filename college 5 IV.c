#include <stdio.h>
#include <conio.h>
int main()
{
    int Son,Mother,Father,Total_age;
    printf("Enter the age of Son:");
    scanf("%d",&Son);

    Mother = 3*Son;
    Father = Mother + 5;
    Total_age = Mother + Father + Son;

    printf("The total age is %d",Total_age);

    getch();
    return 0;


}

