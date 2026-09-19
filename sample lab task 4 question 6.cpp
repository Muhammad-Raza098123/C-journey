#include <stdio.h>
int main(){
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	int ans1 = a << 2;
	int ans2 = a << 1;
	int final = ans1 + ans2 + a;
	printf("\nAfter Multiplying by 7: %d",final);
	return 0;
}
