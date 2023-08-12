//WAP to show;
//1. Monday to Sunday using switch case. 
//2. Vowel or Consonant using switch case.

 //1.
#include<stdio.h>
int main()
{
    int week;
    printf("enter the no of week(1-7):  ");
    scanf("%d", &week);
    switch (week)
    {
     case 1:
          printf("Monday");
     break;
     case 2 :
         printf("Tuesday");
     break;
     case 3: 
         printf("Wednesday");
     break;
     case 4:
         printf("Thursday");
     break;
     case 5:
         printf("Friday");
     break;
     case 6:
         printf("Saturday");
     break;
     case 7: 
         printf("Sunday");
     break;
     default:
     printf("invalid");
     }
     return 0;
}



//2.
#include<stdio.h>
int main()
{
  char ch;
  printf("enter any alphabet: ");
  scanf("%c", &ch);
  switch (ch)
  {
      case 'a':
      printf("vowel");
      break;
      case 'e':
      printf("vowel");
      break;
      case 'i':
      printf("vowel");
      break;
      case'o':
      printf("vowel");
      break;
      case 'u':
      printf("vowel");
      break;
      case 'A':
      printf("vowel");
      break;
      case 'E':
      printf("vowel");
      break;
      case 'I':
      printf("vowel");
      break;
      case'O':
      printf("vowel");
      break;
      case 'U':
      printf("vowel");
      break;
      default:
      printf("consotant");
  }
  return 0;
    
} 