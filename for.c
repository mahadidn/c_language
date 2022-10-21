// 1 sampai x
// genap dan ganjil 1 sampai x
// menghitung faktorial
// menghitung total dan rata-rata dari sejumlah data

#include <stdio.h>


int main (){
	for (int i = 1; i <= 10; i++){
		printf ("%d. Mahadi Dwi Nugraha\n", i);

	}

	printf ("\n");
	for (int j = 1; j <= 10; j+=2){
		printf ("%d, ", j);
	}
	
	printf ("\n");
	for (int k = 2; k <= 10; k+=2){
		printf ("%d, ", k);
	}

	printf ("\n");
	for (int l = 10; l >= 0; l--){
		printf ("%d, ", l);
	}

	printf ("\n");
	for (char m = 'A'; m <= 'Z'; m++){
		printf ("%c, ", m);
	}

	
	return 0;
}