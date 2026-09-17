#include <stdio.h>
int main(){
	int a,b;
	printf("Enter First Postive Number: ");
	scanf("%d",&a);
	printf("\nNow Enter Second Positive Number: ");
	scanf("%d",&b);
	int ans = a & b;
	int res = ans >> 2;
	printf("\n%d",res);
	return 0;
}
