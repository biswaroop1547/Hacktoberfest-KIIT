#include<stdio.h>
 void main()
 {
 int i,j;
 for(i=1;i<=15;i++)
 {
 for(j=1;j<=10;j++){
 if(((i>=4 && i<=6) && (j>=4))||((i>=10 && i<=12)&&(j<=7)))
 {
 printf(" ");
 }
 else
 {
 printf("*");
 }
 }
 printf("\n");
 }
 }
