#include <stdio.h>

int main(){

	int a[5];

	// mengisi data array
	a[0] = 21;
	a[1] = 14;
	a[2] = 5;
	a[3] = 11;
	a[4] = 9;

	for (int i = 0; i < 5; i++){
		printf ("index ke-%d = %d\n", i, a[i]);
		
	}

	return 0;
}