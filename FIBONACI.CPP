#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,t1=1,t2=0,x;
 for(n=1;n<=10;n++)
 {
 printf("%d,",t2);
 x=t1+t2;
 t1=t2;
 t2=x;
 }

getche();
}