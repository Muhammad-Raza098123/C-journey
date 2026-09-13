#include <stdio.h>
#include <conio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter Marks of Subject one: (0 - 100)\n");
	scanf("%d",&sub1);
	printf("Enter Marks of Subject Two: (0 - 100)\n");
	scanf("%d",&sub2);
	printf("Enter Marks of Subject Three: (0 - 100)\n");
	scanf("%d",&sub3);
	printf("Enter Marks of Subject Four: (0 - 100)\n");
	scanf("%d",&sub4);
	printf("Enter Marks of Subject Five: (0 - 100)\n");
	scanf("%d",&sub5);
	float aggr = (float)(sub1 + sub2 + sub3 + sub4 + sub5) / 5;
	float per = avg * 100;
	printf("The Average is: %.3f\n",avg);
	printf("The percentage is: %.3f",per);
	getch();
	return 0;
}
