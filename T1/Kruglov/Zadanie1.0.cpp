// Zadanie1.0.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

int main(void){
	int vis, diam, rash;
	double R, Sb, St, Pi = 3.14;
	
	printf("Vvedite visotu v cm");
	scanf_s("%d", &vis);
	printf("Vvedite diametr v cm");
	scanf_s("%d", &diam);
	printf("rashod banki kraski");
	scanf_s("%d", &rash);

	R = (double)diam / 2.0;
	Sb = (double)vis * (2.0 * Pi * R);
	Sb = Sb * 2.0 / 10000;
	St = Pi * R * R;
	St = St * 4.0 / 10000;
	printf("Dlia pokraski bochki trebuetsya %.2f banok \n (Dlya bokov: %.2f i dlya dna %.2f )\n", (Sb + St) / (double)rash, Sb / (double)rash, St / (double)rash);
}