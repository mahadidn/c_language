#include <stdio.h>

int main(){

	printf ("\nPROGRAM KALKULATOR\n");
	printf ("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi");

	float x;
	float y;
	int aritmatika;

	printf ("\n\nMasukkan nilai x : ");
	scanf ("%f", &x);
	printf ("Masukkan operator : ");
	scanf ("%d", &aritmatika);
	printf ("Masukkan nilai y : ");
	scanf ("%f", &y);

	switch (aritmatika){
		case 1:
			printf ("%.2f + %.2f = %.2f\n", x, y, x + y);
			break;
		case 2:
			printf ("%.2f - %.2f = %.2f\n", x, y, x - y);
			break;
		case 3:
			printf ("%.2f * %.2f = %.2f\n", x, y, x * y);
			break;
		case 4:
			printf ("%.2f / %.2f = %.2f\n", x, y, x / y);
			break;
		default:
			printf ("\nOperator yang anda masukkan salah!\n");
	}


	return 0;
}