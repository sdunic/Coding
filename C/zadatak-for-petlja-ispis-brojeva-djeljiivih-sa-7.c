/*
	Uz pomo� for petlje ispi�ite brojeve ve�e od 500 i manje od 1700 koji su djeljivi sa 7 i izra�unajte koliko ima takvih brojeva ukupno.
*/

#include <stdio.h>
void main()
{
	int x;
	int brojac = 0;
	
	for( x = 501; x < 1700; x++){
		if( x % 7 == 0 ){
			printf("%d\n", x);
			brojac++;
		}
	}
	
	printf("Ukupno brojeva ima: %d", brojac);

}

