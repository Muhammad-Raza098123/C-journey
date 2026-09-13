#include <stdio.h>
int main(){
	float pi = 3.14;
	float r;
	printf("Enter Redius of circle: ");
	scanf("%f",&r);
	float area = pi * (r * r);
	printf("\nThe Area of Triangle is: %.2f",area);
	return 0;
}
