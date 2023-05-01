#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   int age;
   printf("enter your age=");
   scanf("%d=",&age);
   if(age<18 && age>0)
   {
     printf("negative");
   }
   else if(age==18)
   {
     printf("constantly");
   }
   else if(age>18)
   {
     printf("posetive");
   }


   getch();

}