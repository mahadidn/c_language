// SCANF
#include <stdio.h>

void main (){

	// input dan output
	int usia;
	float ipk;
	char nama[20];

	printf ("Masukkan Nama anda : ");
	// ada 2 cara agar bisa di input pakai spasi
	//scanf ("%[^\n]s", nama);
	gets (nama);

	printf ("Masukkan usia anda : ");
	scanf ("%d", &usia);
	printf ("Masukkan IPK anda : ");
	scanf ("%f", &ipk);

	printf ("\n\nNama anda adalah : %s", nama);
	printf ("\nUsia anda adalah : %d tahun", usia);
	printf ("\nIPK anda adalah : %.2f ", ipk);

}