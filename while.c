#include <stdio.h>

int main (){

	int a = 1;
	while (a <= 10){
		printf ("%d ", a);
		a++;
	}

	char input = 'y';

	while (input == 'y'){
		printf ("\nLooping\n");
		printf ("\nApakah anda ingin mengulan proses?(y/t) : ");
		scanf (" %c", &input);
	}

	printf ("\n======Program Selesai======\n");

	return 0;
}