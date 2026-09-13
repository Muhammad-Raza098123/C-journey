#include <stdio.h>
#include <conio.h>
int main(){
	float basic_salary,allowance = 0.4,rent = 0.2;
	printf("Enter you salary: ");
	scanf("%f",&basic_salary);
	float dearness = basic_salary * allowance;
	float house = basic_salary * rent;
	float gross_salary = basic_salary + dearness + house;
	printf("Dearness Allowance: %.2f:\n",dearness);
	printf("House Rent Allowance: %.2f\n",house);
	printf("The Gross Salary  is: %.2f",gross_salary);
	getch();
	return 0;
}
