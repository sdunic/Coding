/*
	Napi�ite C program koji omogu�ava korisniku da upi�e dva realna broja. Treba izra�unati i ispisati kvadrat ve�eg broja od ta dva. 
*/
#include <stdio.h>
void main()
{
	float x;
	float y;
	
	scanf("%f %f",&x,&y);
	
	if( x > y )
	{
	 	printf("Kvadrat ve�eg broja %f je broj %f\n", x, x*x);
	}
	else
	{
		printf("Kvadrat veceg broja %f je broj %f\n",y,y*y);
	}
}
