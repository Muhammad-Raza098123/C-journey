#include <stdio.h>
int main(){
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	(a & 1)?printf("\nThe Number is Odd: ") : printf("\nThe Number is Even: ");
	return 0;
}
