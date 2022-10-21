#include <stdio.h>

void main(){

	for (int i = 1; i <= 100; i++){
		 if (i == 50){
		 	break;		// break : berhenti paksa
		 }
		 else if (i == 20){
			continue;	// continue : ngeskip angkanya
		 }
		printf ("%d ", i);

	}

	return 0;
}