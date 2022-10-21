#include <stdio.h>

void main(){

	// perkalian 1 - 10 

	for (int i = 1; i<= 10; i++){
		for (int j = 1; j <= 10; j++ ){
			printf ("%d x %d = %d\n", i, j, i * j);
		}
		printf ("\n");
	}

}