 #include <stdio.h>

 void kalkulator();

 int main(){

	int i = 11;
	while (i <= 10){
		printf ("%d ", i);
		i++;
	}

	char input = 'y';

	while (input == 'y'){

		int masukan;
		printf ("\n===Program===");
		printf ("\n1. Kalkulator");
		printf ("\nMasukkan inputan : ");
		scanf ("%d", &masukan);

		switch (masukan){
			case 1:
				kalkulator();
				break;
			default:
				printf ("\nMasukkan pilihan yang benar!\n");
		}

		printf ("\nApakah anda ingin mengulang proses? (y/t) : ");
		scanf ("%s", &input);
	}
	
	printf ("\n===========Program Selesai===============\n");

	return 0;
 }


 void kalkulator(){
	float a, b, hasil;
	char aritmatika;
	printf ("\n====KALKULATOR====\n");
	printf ("1. Kali (*)\n2. Bagi (/)\n3. Tambah (+)\n4. Kurang (-)\n");
	printf ("Masukkan angka pertama : ");
	scanf ("%f", &a);
	printf ("Masukkan inputan : ");
	scanf ("%s", &aritmatika);
	printf ("Masukkan angka kedua : ");
	scanf ("%f", &b);


	switch (aritmatika){
		case '*':
			printf ("%.2f x %.2f = %.2f\n", a, b, a * b);
		break;
		case '/':
			printf ("%.2f : %.2f = %.2f\n", a, b, (a / b));
		break;
		case '+':
			printf ("%.2f + %.2f = %.2f\n", a, b, (a + b));
		break;
		case '-':
			printf ("%.2f - %.2f = %.2f\n", a, b, (a - b));
		break;
		default:
		printf ("\nMasukkan pilihan yang benar!\n");

	}

 }