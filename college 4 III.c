#include<stdio.h>
#include<conio.h>
int main()
    {
        float a,b,c,area;
        printf("Enter the values of a,b,c:");
        scanf("%f,%f,%f",&a,&b,&c);

        area = a + b + c;
        printf("The area is %f",area);


        getch();
        return 0;
    }
