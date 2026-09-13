#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	float r;
	float pi = 3.14;
	float base,height;
	printf("Enter a: for perimeter for triangle: ");
	scanf("%f",&a);
	printf("\nEnter b: for perimeter for triangle: ");
	scanf("%f",&b);
	printf("\nEnter c: for perimeter for triangle: ");
	scanf("%f",&c);
	printf("\nEnter Radius for Circle: ");
	scanf("%f",&r);
	printf("\nEnter Base for circle: ");
	scanf("%f",&base);
	printf("\nEnter height for circle: ");
	scanf("%f",&height);
	float perimeter = a + b + c;
	float area = 1.0/2.0 * (base * height);
	float circumference = 2 * pi * r;
	printf("The  perimeter of Triangle is: %.2f \n",perimeter);
	printf("The Area of Circle is: %.2f \n",area);
	printf("The circumference of Circle is: %.2f ",circumference);
	return 0;
}
