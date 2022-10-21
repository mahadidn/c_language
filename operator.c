#include <stdio.h>

int main(){

	int a;
	int b = 4;
	int c = 2;
	a = b + c;
	printf ("%d + %d = %d\n",b , c, a);

	printf ("\na++ = %d\n", a++);
	printf ("++a = %d\n", ++a);
	printf ("a-- = %d\n", a--);	
	printf ("--a = %d\n", --a);

//========OPERATOR RELASI================
int x = 5;
int y = 10;
int samaDengan = a == b;
int tidakSama = a != b;

printf ("\n%d == %d : %d\n", x, y, samaDengan);
printf ("%d != %d : %d\n", x, y, tidakSama);

//==========OPERATOR LOGIKA===============
x = 1;
y = 0;
printf ("\n%d && %d = %d\n", x, y, x && y);
printf ("%d || %d = %d\n", x, y, x || y);
printf ("!%d =  %d\n",x ,!x );
printf ("%d ^ %d = %d\n", x, y, x ^ y);

//========OPERASI BITWISE atau OPERASI BINER============
x = 20;
y = 15;
// bilangan desimal diubah ke biner kemudian dioperasikan
printf ("\n%d & %d = %d\n", x, y, x & y); // AND
printf ("%d | %d = %d\n", x, y, x | y); // OR
printf ("~%d = %d\n", x, ~x); // ~n = -(n+1) / ~(-n) = (n-1) // NOT
printf ("%d ^ %d = %d\n", x, y, x ^ y); // XOR
printf ("%d << 1 = %d\n", x, x << 1); // Left Shift
printf ("%d >> 1 = %d\n", x, x >> 1); // Right Shift

//=========OPERATOR ASSIGMENT(PENUGASAN)==========

printf ("\nx : %d\n", x = 10);
printf ("x += 10 : %d\n", x += 10);
printf ("x -= 10 : %d\n", x -= 10);
printf ("x *= 10 : %d\n", x *= 10);
printf ("x /= 10 : %d\n", x /= 10);

//===========OPERATOR TERNARY==============
// kamu suka aku?   "ya"    : "tidak";
// i     >    5 ?   "benar" : "salah";

int i = 10;
printf ("\n%s", i > 5 ? "benar" : "salah");

int bulanke = 4;
printf ("\n%s", bulanke == 1? "Januari" : "Bulan yang lain");

int nilaiAngka = 84;
char nilaiHuruf = nilaiAngka >= 80 && nilaiAngka <= 100 ? 'A' : 'X';
printf ("\nNilai angka %d = %c", nilaiAngka, nilaiHuruf);



	return 0;
}