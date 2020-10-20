#include<stdio.h>
 void main()
 {
 int is=1;
 int os=2;
 int WL=5;
 int WH=5;
 int inc=1;
 int i,j,k;
 int jump=(WH*3)-(WH+1);
 int ch='Z'-WH+1;
 for(i=1;i<=WH;i++)
 {
 for(j=1;j<WL;j++)
 {
 for(k=1;k<=os;k++)
 {
 printf(" ");
 }
 printf("%c",ch);
 for(k=1;k<=is;k++)
 {
 printf(" ");
 }
 ch-=inc;
 if(ch<'A')
 ch=ch+26;
 printf("%c",ch);
 for(k=1;k<=os;k++)
 {
 printf(" ");
 }
 printf(" ");
 ch-=jump;
 if(ch<'A')
 ch=ch+26;
 }
 os=(i+1!=WH);
 is=(i+1!=WH)?3:5;
 ch='Z'-WH+i+1;
 inc=inc+2;
 jump-=2;
 printf("\n");
 }
 }
