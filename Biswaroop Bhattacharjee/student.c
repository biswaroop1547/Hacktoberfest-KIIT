#include <stdio.h>
struct student {
    int r;
    char name[30];
    float m1,m2,m3,m4,m5;
};
int main() {
	
    struct student marks[5];
    for(int i=1; i<=5; i++)
    {
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].r);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter marks1 :\n");
        scanf("%f", &marks[i].m1);
        printf("Enter marks2 :\n");
        scanf("%f", &marks[i].m2);
        printf("Enter marks3 :\n");
        scanf("%f", &marks[i].m3);
        printf("Enter marks4 :\n");
        scanf("%f", &marks[i].m4);
        printf("Enter marks5 :\n");
        scanf("%f", &marks[i].m5);
    }
	for(int i=1; i<=5; i++) 
    {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].m1 + marks[i].m2 + marks[i].m3+ marks[i].m4 + marks[i].m5)/500.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}