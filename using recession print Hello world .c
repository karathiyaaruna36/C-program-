#include<stdio.h>
#include<conio.h>
//decleacion
void printhw(int count);
//function call
int main()
{

printhw(5);
    return 0;
}
// function definition 
void printhw(int count)
{
if(count == 0){
return;
}
printf("Hello world \n");
printhw(count - 1);

}