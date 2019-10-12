#include<stdio.h>
int main()
{
	float num1 , num2 , sum , dif,prod ;
	float avg;
	printf("Enter the first number\n ");
	scanf("%f",&num1);
	printf("Enter the second number\n");
	scanf("%f",&num2);
	sum = num1 + num2;
	dif = num1 - num2;
	prod =  num1 * num2;
	 avg = (num1 + num2)/2;
	printf("The sum of the two numbers are : %f\n",sum);
	printf("The differenc of the two numbers are : %f\n",dif);
	printf("The product of the two numbers are : %f\n",prod);
	printf("The avarge of the two numbers are : %f\n",avg);
return 0;
}

