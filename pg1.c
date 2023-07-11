// find F from c (Temp)
//function type :-[with Parameters without Returntype]
#include<stdio.h>
void conversion( float*);				//function Declaration (Prototype)
void main()
{
	float f,c;
	printf("Enter the Temperature in Farenheit::");
	scanf("%f",&f);
	conversion(&f);							//function Call (Invoke)
 	
	printf("The Conversion of Temp from Farenheit to Celsius is :: %f",f);
}
void conversion(float*x)				//function Defination (Body)
{
	float a;
	a=*x;
	a= (a-32)*0.555;
	*x=a;
}
