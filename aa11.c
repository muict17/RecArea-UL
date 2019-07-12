/*• Write a program that is a self-defined function.  Also prints of the rectangles 
• What is the input of the function?  
• What is the output of the function?  
• How to transform the input to the output? */
#include<stdio.h>
float RecArea(int,int);
int main()
{
    int B,H;
    printf("Enter Base : ");
    scanf("%d",&B);
    printf("Enter Height :");
    scanf("%d",&H);
    printf("%.2f",RecArea(B,H));
}
float RecArea(int Base,int Height)
{
    float A;
    A=Base*Height;
    return A;
}