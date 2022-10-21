// TIPE DATA dan PRIINTF
#include <stdio.h>

// konstanta di C
#define JUDUL "Belajar C"  // deklarasi konstanta
#define BILANGAN 100 	   // deklarasi angka/int

void main (){
// tipe data di C
	int angka = 10;
	char huruf = 'H'; // char hanya bisa gunakan 1 karakter apapun, kalo banyak pake string
	float pecahan = 4.57;

	printf ("\nkonstanta judul adalah : %s\n", JUDUL);
	printf ("konstanta bilangan adalah : %i\n\n", BILANGAN);
	printf ("angka : %i\n", angka);
	printf ("huruf : %c\n", huruf);
	printf ("pecahan : %.1f\n", pecahan); // satu dibelakang koma maka akan dibulatkan
	printf ("pecahan : %.2f\n", pecahan); // dua dibelakang koma

	puts ("Ini adalah fungsi dari puts()"); //puts tidak bisa memanggil variabel dan hanya bisa menampilkan tulisan dan ke enter
	putchar ('&'); //putchar hanya bisa menampilkan char

}