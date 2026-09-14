#include <stdio.h>
int main(){
	float base,height;
	printf("Enter Base of Triangle: ");
	scanf("%f",&base);
	printf("Enter Height of Triangle: ");
	scanf("%f",&height);
	float a = (1.0/2.0) * (base * height); 
	/* Notice that I have putted 1.0 & 2.0 instead of 1 & 2 
	Because if you divide two integer the answer will demonated into integar*/
	printf("The Area of Triangle is: %.2f",a);
	return 0;      
}
