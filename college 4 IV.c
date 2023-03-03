#include<stdio.h>
#include<conio.h>
int main()
    {
        float h,b,area;
        printf("Enter the values of h,b:");
        scanf("%f.%f",&h,&b);

        area = 0.5*h*b;
        printf("The area is %f",area);
        getch();
        return 0;
   
    }
