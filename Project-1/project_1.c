#include<stdio.h>
#include<math.h>

void main()
{

float sum,sub,divi,mult,a,b;

char oper;

printf("Enter Values\n");

scanf("%f %f", &a, &b);

sum  = a+b;
sub  = a-b;
divi = a/b;
mult = a*b;

printf("Enter the type of Operation\n");

printf("Press 'a' for Addition");
printf("\nPress 's' for Subtraction");
printf("\nPress 'm' for Multiplication");
printf("\nPress 'd' for Division");

scanf(" %c",&oper);

if(oper =='a')
{
    printf("%.2f",sum);
}

else if(oper =='s')
{
    printf("%.2f",sub);
}

else if(oper =='m')
{
    printf("%.2f",mult);

}

else if(oper =='d')
{
    printf("%.2f",divi);
}

else
{
    printf("Invalid Operator Entered !");
}



}