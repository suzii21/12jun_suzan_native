//WAP to show difference between Structure and Union.

STRUCTURE:
-Each variable member occupied a unique memory space.
-Individual member can be accessed at a time.
-Several mambers of a structure can initialize at a once.
-It allows multiple variable members at once.
-It is used to store different data type values.



UNION:
-Variables members share the memory space of the largest size variable.
-Only one member can be accessed at a time.
-Only the first member of a union can be initialized.
-It allows only one variable member at once.
-It is used to store one data at a time from different data types.


Structure syntax:

#include<stdio.h>
struct stdata 
{
    int no;
    char name[10];
}obj;
int main() 
{
    printf("\nenter your no: "); 
    scanf("%d", &obj.no);
    printf("\nenter your name: ");
    scanf("%s", &obj.name);
    printf("\n%s your no is : %d", obj.name, obj.no);
    return 0;
}



Union syntax:

#include<stdio.h>
union stdata{
    int no;
    char name[10];
}obj;
int main() {
    printf("Enter your roll no: ");
    scanf("%d", &obj.no);
    printf("Enter your name: ");
    scanf("%s", &obj.name);
    printf("\n%s your roll no is: %d", obj.name, obj.no);
    return 0;
}


