#include<stdio.h>
#include<conio.h>
//decleacion
int printtable(int n);
//function call
int main()
{
int n;
printf("enter your number");
scanf("%d",&n);
printtable(n);
    return 0;
}
// function definition 
int printtable(int n)
{
for(int i=1; i<=10; i++)
{
printf("table%d \n",n*i);;
}
}