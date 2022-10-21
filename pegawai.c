#include <stdio.h>

int main(){

	//seleksi pegawai
	// laki-laki = 160
	// perempuan = 155

	printf ("Seleksi Pegawai");

	char jeniskelamin;
	int tinggi;

	printf ("\n\nMasukkan Jenis Kelamin (L/P) : ");
	scanf ("%c", &jeniskelamin);
	printf ("Masukkan tinggi badan : ");
	scanf ("%d", &tinggi);

	if (jeniskelamin == 'L' || jeniskelamin == 'l'){
		printf ("Laki-laki\n");
		if (tinggi >= 160){
			printf ("Selamat anda lolos seleksi!");
		}
		else {
			printf ("Maaf anda tidak lolos");
		}
	}
	else if (jeniskelamin == 'P' || jeniskelamin == 'p'){
		printf ("Perempuan\n");
		if (tinggi >= 155){
			printf ("Selamat anda lolos seleksi!");
		}
		else {
			printf ("Maaf anda tidak lolos seleksi");
		}
	}

	return 0;
}