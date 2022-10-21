#include <stdio.h>

int main(){

	int jumlahdata;
	printf ("Masukkan jumlah data : ");
	scanf ("%d", &jumlahdata);
	int a[jumlahdata];

	for (int i = 0; i < jumlahdata; i++){
		printf("Masukkan data array ke-%d = ", i);
		scanf ("%d", &a[i]);

		}

	printf ("\n===Tampilan Data===\n");
	for (int j = 0; j < jumlahdata; j++){
		printf ("Index ke-%d = %d\n", j, a[j]);
	}

	return 0;
}