/*
	Koriste�i scanf funkciju u�itajte cijeli broj u varijablu broj1, a potom je ispi�ite pmo�u printf funckije u dekadskom obliku, te jedan razmak pa heksadekadski oblik tog broja.
	
*/

#include<stdio.h>

void main(){
	int broj1;
	
	scanf("%d", &broj1);
	
	printf("%d %x", broj1, broj1);
}
