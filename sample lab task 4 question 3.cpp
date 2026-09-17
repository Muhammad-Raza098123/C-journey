#include <stdio.h>
int main(){
	int a,b;
/* Using bitwise right-shift (>>) for division by 4. 
   Shifting right by 2 positions (num >> 2) is equivalent to 
   truncating integer division by 2^2 (4). */
	printf("Enter First Postive Number: ");
	scanf("%d",&a);
	printf("\nNow Enter Second Positive Number: ");
	scanf("%d",&b);
	int ans = a & b;
	int res = ans >> 2;
	printf("\n%d",res);
	return 0;
}
