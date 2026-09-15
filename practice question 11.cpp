#include <stdio.h>
#include <math.h>
int main(){
	int x1,x2,y1,y2; 
	
	/*I have used the math.h library to use some predefined mathematical functions,
    which makes the code easier to write and helps demonstrate the basic usage
	of the math.h library.*/

	float ans;
	printf("Enter X1: ");
	scanf("%d",&x1);
	
	printf("\nEnter X2: ");
	scanf("%d",&x2);
	
	printf("\nEnter Y1: ");
	scanf("%d",&y1);
	
	printf("\nEnter Y2: ");
	scanf("%d",&y2);
	
 float x = pow((x2 - x1),2);
 float y = pow((y2 - y1),2);
 ans = sqrt(x + y);
 printf("\nThe Euclidean distance of 2 points is: %.3f",ans); 
	return 0;
}

