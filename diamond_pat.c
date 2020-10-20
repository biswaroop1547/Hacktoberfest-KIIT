#include<stdio.h>
 void main()
 {
 int i,j;
 int n=9;
 int c1=(n-1)/2;
 int c2=3*n/2-1;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(i+j<=c1||i-j>=c1||j-i>=c1||i+j>=c2)
 printf("*");
 else
 printf(" ");
 }
 printf("\n");
 }
 }
