#include<stdio.h>
#define pi 3.14
int main()
{
	float r,l,b,cir_area,rect_area;
	
	printf("Enter the value of radius r:\n");
	scanf("%f",&r);
	
	cir_area=pi*r*r;
	
	printf("Area of a circle is:%6.2f \n",cir_area);
	
	printf("Enter the value of length l:\n");
	scanf("%f",&l);
	printf("Enter the value of breadth b:\n");
	scanf("%f",&b);
	
	rect_area=l*b;
	
	printf("Area of rectangle is:%6.2f",rect_area);
	return 0;
	
}
