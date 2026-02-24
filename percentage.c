#include<stdio.h>
float percentage(int a, int b,int c);
float percentage(int a,int b,int c)
{
     float mark;
    return mark=((a+b+c)/3)*100;

  
}
int main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    float result=percentage(a,b,c);
    printf(" result is:%f",result);
}