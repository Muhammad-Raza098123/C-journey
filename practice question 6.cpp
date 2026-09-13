#include <stdio.h>
int main(){
	float length = 1189;
	float width = 841;
	float new_length,new_width;
	float temp;
	printf("A0 Length is %.1f width is %.1f\n",length,width);
	new_length = width;
	new_width = length / 2;
	printf("A1 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A2 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A3 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A4 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A5 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A6 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A7 Length is %.1f width is %.1f\n",new_length,new_width);
	temp = new_length;
	new_length = new_width;
	new_width = temp / 2;
	printf("A8 Length is %.1f width is %.1f\n",new_length,new_width);
	return 0;
}

