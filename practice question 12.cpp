#include <stdio.h>
#include <math.h>
int main(){
	int a1 = 5,a2 = 2, a3 = -3,b1 = -4, b2 = 9, b3 = 2;
	float angle = 53;
	float radian;
	radian = angle * 3.14 / 180;
	float mag_a,mag_b;
	mag_a = sqrt((a1 * a1)+(a2 * a2)+(a3 * a3));
	mag_b = sqrt((b1 * b1)+(b2 * b2)+(b3 * b3));
	float dot;
	dot = mag_a * mag_b * cos(radian);
	printf("The Dot product of two vector is: %.2f",dot);
	return 0;
}
