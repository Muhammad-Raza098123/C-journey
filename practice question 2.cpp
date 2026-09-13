#include <stdio.h>
#include <conio.h>
int main(){
	float dis;
	printf("Enter your distance (km): ");
	scanf("%f",&dis);
	float meter = 1000.0;
	float feet = 3.28;
	float inch = 12;
	float centimeter = 2.54;
	meter = dis * meter;
	feet = meter * feet;
	inch = feet * inch;
	centimeter = inch * centimeter;
	printf("kilometer = %.2f\nMeter = %.2f\nFeet = %.2f\n Inch = %.2f\nCenitmeter = %.2f",dis,meter,feet,inch,centimeter); 
	getch();
	return 0;
}
