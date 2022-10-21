#include <stdio.h>

int main (){

	int i = 11;
	do{
		printf ("%d ", i);
		i++;
	}while(i <= 10);

	char input = 't';
	do {
		printf ("\nApakah anda ingin mengulang proses? (y/t) : ");
		scanf (" %c", &input);

	}while(input == 'y');

	printf ("\n\n=====Perulangan telah berhenti! Terima kasih!");

	return 0;
}