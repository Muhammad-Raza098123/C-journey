#include <stdio.h>
int main(){
	int num;
printf("Enter 5 digits: ");
scanf("%d",&num);
int d1,d2,d3,d4,d5;
d1 = num % 10;
num = num / 10;
d2 = num % 10;
num = num /10;
d3 = num % 10;
num = num /10;
d4 = num % 10;
num = num /10;
d5 = num % 10;
num = num /10;
printf("%d\n",d1);
printf("%d\n",d2);
printf("%d\n",d3);
printf("%d\n",d4);
printf("%d\n",d5);
	return 0;
}
