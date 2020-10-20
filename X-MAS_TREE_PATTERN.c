#include<stdio.h>
 void main()
 {
 int i,j,k;
 int height=3,width=4;
 int space=width*5;
 int r=1;
 int m=1;
 for(r=1;r<=height;r++)
 {
 for(i=m;i<=width;i++)
 {
 for(j=space;j>=i;j--)
 {
 printf(" ");
 }
 for(k=1;k<=i;k++)
 {
 printf("* ");//space after'*'
 }
 printf("\n");
 }
 m+=2;width+=2;
 }
 for(i=1;i<=4;i++)
 {
 for(j=space-3;j>=1;j--)
 {
 printf(" ");
 }
 for(k=1;k<=4;k++)
 {
 printf("* ");//space after'*'
 }
 printf("\n");
 }
 }
