//Create menu driven calculator using function with if-else loop and switch case

#include <stdio.h>
int main() 
{
    int choice;
    int a, b;
    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(a<=0, b>=0);
        {
            printf("enter value of a: ");
            scanf("%d", &a);
            printf("enter the value of b: ");
            scanf("%d", &b);
        }
            switch (choice) {
        case 1:
            printf("Addition of %d + %d = %d \n", a,b,a+b);
            break;
        case 2:
            printf("Subtraction of %d - %d = %d \n", a,b,a-b);
            break;
        case 3:
            printf("multiplication of %d * %d = %d \n", a,b,a*b);
            break;
        case 4:
            printf("Division of %d / %d = %d \n", a,b,a/b);
            break;
        default:
            printf("Invalid\n");
            break;
        }
        } while (1);
return 0;
}





