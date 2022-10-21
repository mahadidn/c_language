#include <stdio.h>

int main(){

	int nilai;

	int i;

	printf ("Masukkan nilai : ");
	scanf ("%d", &nilai);

	if (nilai >= 80 && nilai <= 100){
		printf ("Nilai A");
	}
	else if(nilai >= 70 && nilai <=79){
		printf ("NIlai B");
	}
	else if (nilai >=60 && nilai <= 69) {
		printf ("Nilai C");
	}
	else {
		printf ("Anda tidak lulus");
	}

	return 0;
}