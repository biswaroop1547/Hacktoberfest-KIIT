#include<stdio.h>
 #include<math.h>
 
 int isDisarium(int);
 int digit_count(int);
 
 int main()
 {
 int i,limit;
 int sum=0,digit_count=0,pd;
 printf("Enter a number (upper limit)\n");
 scanf("%d",&limit);
 printf("Disarium Number between 1 to %d\n",limit);
 for(i=1;i<=limit;i++)
 {
 if(isDisarium(i)==1)
 {
 printf("%d\n",i);
 }
 }
 return 0;
 }
 
 int isDisarium(int n)
 {
 int dc=digit_count(n);
 int pd;
 int sum=0;
 int t=n;
 
 while(t!=0)
 {
 pd=t%10;
 sum=sum+pow(pd,dc--);
 
 t=t/10;
 }
 if(sum==n)
 return 1;
 else
 return 0;
 }
 
 int digit_count(int n)
 {
 int count=0;
 while(n!=0)
 {
 n=n/10;
 count++;
 }
 return count;
 }
