#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n;
printf("enter n value:");
scanf("%d",&n);
if((n<=100) && (n>=85))
{
printf("Grade A");
}
else if((n<=84) && (n>=70))
{
printf("Grade B");
}
else if((n<=69) && (n>=55))
{
printf("Grade C");
}
else if((n<=54) && (n>=40))
{
printf("Grade D");
}
else if(n<=40)
{
printf("Grade F");
}
}
