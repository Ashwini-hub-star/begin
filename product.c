#include<stdio.h>
int main()
{
 int p[3];
 printf("price  of first product:");
 scanf("%d",&p[0]);
printf("price of second product:");
 scanf("%d",&p[1]);
 printf("price  of third product:");
 scanf("%d",&p[2]);
 printf(" price of product 1:%d\n price  of product 2:%d\n,price  of product 3:%d ",p[0],p[1],p[3]);
 float total=(p[0]+p[1]+p[2])*0.25;
 printf("total amount is:%d",total);
}