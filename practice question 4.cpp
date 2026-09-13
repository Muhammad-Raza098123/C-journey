#include <stdio.h>
int main(){
	float fahrenheit;
	float c;
	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f",&fahrenheit);
	c = (fahrenheit - 32) * (5.0/9.0);
	printf("Fahernheit temperator in Centigrade: %.2f",c);
	return 0;
}
