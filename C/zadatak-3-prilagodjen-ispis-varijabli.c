/*
	Uporabom scanf cijeli broj a, znak c i realni broj z. Kod pozivanja printf funkcije dati
	ispis u retku, na slijede�i na�in: z �e biti ispisan na 6 decimalnih mjesta, zatim se ispisuje
	tabulator, te znak c, jedan razmak pa ASCII vrijednost znaka c; nakon toga idu dva
	razmaka i broj a. 
*/

#include <stdio.h>
void main()
{
	//deklaracija varijabli
	int a;
	float z;
	char c;
	
	//unos i spremanje u varijable
	scanf("%d %c %f",&a,&c,&z);	
	
	//ispis u tra�enom obliku na ekran
	printf("%.6f\t%c %d  %d",z,c,c,a);	

}
