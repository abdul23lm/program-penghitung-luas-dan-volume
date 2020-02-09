/*===Tugas UAS Membuat Program Kumpulan untuk Menghitung Luas Bangun Datar dan Volume===

     Nama       	: Abdul Latif Munjiat
     NPM        	: 1610631170004
     Semester   	: 2'A (Genap) Angkatan 2016
     Prodi      	: Teknik Informatika
     Fakultas   :	 Ilmu Komputer
      	Universitas Singaperbangsa Karawang */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//hitungannya bidang datar
void kelilingpersegi(){
int p, k;
printf("\n");
printf("========================\n");
printf("Hitung Keliling Persergi\n");
printf("========================\n");
printf("Input sisi: ");scanf("%d",&p);
k=4*p;
printf("Keliling persegi : %d \n",k);
}
void luaspersegi(){
int p, l, luas;
printf("\n");
printf("===================\n");
printf("Hitung Luas Persegi\n");
printf("===================\n");
printf("Input sisi: ");scanf("%d",&p);
luas=p*p;
printf("luas persegi: %d \n",luas);
}
void kelilingpersegipanjang(){
int p, l, k;
printf("\n");
printf("========================\n");
printf("Hitung Keliling Persergi Panjang\n");
printf("========================\n");
printf("Input Panjang: ");scanf("%d",&p);
printf("Input Lebar: ");scanf("%d",&l);
k=2*(p+l);
printf("Keliling persegi panjang : %d \n",k);
}
void luaspersegipanjang(){
int p, l, luas;
printf("\n");
printf("===================\n");
printf("Hitung Luas Persegi Panjang\n");
printf("===================\n");
printf("Input Panjang: ");scanf("%d",&p);
printf("Input Lebar: ");scanf("%d",&l);
luas=p*l;
printf("luas persegi panjang: %d \n",luas);
}
void kelilingsegitiga(){
int p, k, ki, kel;
printf("\n");
printf("=======================\n");
printf("Hitung Keliling segitiga\n");
printf("=======================\n");
printf("Input Panjang Alas: ");scanf("%d",&p);
printf("Input Panjang sisi kanan: ");scanf("%d",&k);
printf("Input Panjang sisi kiri: ");scanf("%d",&ki);
kel=p+k+ki;
printf("Keliling segitiga: %d \n",kel);
}
void luassegitiga(){
int p, t, luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas segitiga\n");
printf("=========================\n");
printf("Input alas: ");scanf("%d",&p);
printf("Input Panjang tinggi: ");scanf("%d",&t);
luas=0.5*p*t;
printf("luas segitiga : %d \n",luas);
}
void kelilinglingkaran(){
int p; float kel;
printf("\n");
printf("=======================\n");
printf("Hitung Keliling lingkaran\n");
printf("=======================\n");
printf("Input jari-jari: ");scanf("%d",&p);
kel=2*3.14*p;
printf("Keliling lingkaran: %.2f \n",kel);
}
void luaslingkaran(){
int p; float luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas lingkaran\n");
printf("=========================\n");
printf("Input jari jari: ");scanf("%d",&p);
luas=3.14*p*p;
printf("luas lingkaran : %.2f \n",luas);
}
//hitungannya bidang ruang
void luaskubus(){
int p, luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas kubus\n");
printf("=========================\n");
printf("Input panjang rusuk: ");scanf("%d",&p);
luas=6*p*p;
printf("luas luas permukaan kubus : %d \n",luas);
}
void volumekubus(){
int p, luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas volume\n");
printf("=========================\n");
printf("Input panjang rusuk: ");scanf("%d",&p);
luas=12*p;
printf("volume kubus : %d \n",luas);
}
void luasbalok(){
int p, l, t, luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas balok\n");
printf("=========================\n");
printf("Input panjang : ");scanf("%d",&p);
printf("Input lebar : ");scanf("%d",&l);
printf("Input tinggi: ");scanf("%d",&t);
luas=(2*p*l)+(2*p*t)+(2*l*t);
printf("luas balok : %d \n",luas);
}
void volumebalok(){
int p, l, t, v;
printf("\n");
printf("=========================\n");
printf("Hitung volume balok\n");
printf("=========================\n");
printf("Input panjang : ");scanf("%d",&p);
printf("Input lebar : ");scanf("%d",&l);
printf("Input tinggi: ");scanf("%d",&t);
v=p*l*t;
printf("Volume balok : %d \n",v);
}
void luastabung(){
int p, t; float luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas tabung\n");
printf("=========================\n");
printf("Input jari jari: ");scanf("%d",&p);
printf("Input tinggi: ");scanf("%d",&t);
luas=(2*3.14*p*p)+(2*3.14*p+t);
printf("luas tabung : %.2f \n",luas);
}
void volumetabung(){
int p, t; float v;
printf("\n");
printf("=========================\n");
printf("Hitung Luas tabung\n");
printf("=========================\n");
printf("Input jari jari: ");scanf("%d",&p);
printf("Input tinggi: ");scanf("%d",&t);
v=3.14*p*p*t;
printf("luas tabung : %.2f \n",v);
}
void luasbola(){
int p; float luas;
printf("\n");
printf("=========================\n");
printf("Hitung Luas bola\n");
printf("=========================\n");
printf("Input jari jari: ");scanf("%d",&p);
luas=4*3.14*p*p;
printf("luas tabung : %.2f \n",luas);
}
void volumebola(){
int p, c; float v, l;
printf("\n");
printf("=========================\n");
printf("Hitung Luas tabung\n");
printf("=========================\n");
printf("Input jari jari: ");scanf("%d",&p);
v=(3.14*p*p*p);
c=4.0/3.0;
l=v*c;
printf("luas tabung : %.2f \n",l);
}
//menu bidang datar
void menupersegi(){
int pil; char ulang;
do{
	printf("\n");
	printf("====================\n");
	printf("Menu Persegi\n");
	printf("====================\n");
	printf("1. hitung luas\n");
	printf("2. hitung keliling\n");
	printf("3. keluar\n");
	printf("=================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
	printf("=================<<0. back\n");
switch(pil){
			case 1: luaspersegi();
			break;
			case 2:kelilingpersegi();
			break;
			case 3: exit(0);
			break;
			default: printf("pilihan Anda salah!\n");
			}
printf("====================================\n");
printf("Kembali ke Menu Persegi ? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("====================================\n");
}while(ulang=='y' || ulang=='Y');
}
void menupersegipanjang(){
int pil; char ulang;
do{
	printf("\n");
	printf("====================\n");
	printf("Menu Persegi Panjang\n");
	printf("====================\n");
	printf("1. hitung luas\n");
	printf("2. hitung keliling\n");
	printf("3. keluar\n");
	printf("=================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
	printf("=================\n");
switch(pil){
			case 1: luaspersegipanjang();
			break;
			case 2:kelilingpersegipanjang();
			break;
			case 3: exit(0);
			break;
			default: printf("pilihan Anda salah!\n");
			}
printf("====================================\n");
printf("Kembali ke Menu Persegi panjang? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("====================================\n");
}while(ulang=='y' || ulang=='Y');
}
void menusegitiga(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu Segitiga\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung keliling\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luassegitiga();
			break;
			case 2:kelilingsegitiga();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu segitiga? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
void menulingkaran(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu lingkaran\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung keliling\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luaslingkaran();
			break;
			case 2: kelilinglingkaran();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu lingkaran? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
//menu bidang ruang
void menukubus(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu kubus\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung volume\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luaskubus();
			break;
			case 2: volumekubus();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu kubus? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
void menubalok(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu balok\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung volume\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luasbalok();
			break;
			case 2: volumebalok();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu kubus? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
void menutabung(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu tabung\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung volume\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luastabung();
			break;
			case 2: volumetabung();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu tabung? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
void menubola(){
int pil; char ulang;
do{
	printf("\n");
	printf("==================\n");
	printf("Menu bola\n");
	printf("==================\n");
	printf("1. hitung luas\n");
	printf("2. hitung volume\n");
	printf("3. keluar\n");
	printf("==================\n");
	printf("pilihan anda : ");scanf("%d",&pil);
printf("==================\n");
switch(pil){
			case 1: luasbola();
			break;
			case 2: volumebola();
			break;
			case 3:exit(0);
			break;
			default:{ulang='y';
			printf("pilihan Anda salah!\n");}
			}
printf("=========================================\n");
printf("Kembali ke Menu bola? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=========================================\n");
}while (ulang=='y' || ulang=='Y');
}
//bidang datar
void bidangdatar(){
int pilih;char ulang;
	do{
	printf("\n");
	printf("===============================\n");
	printf("Perhitungan Bangun Datar\n");
	printf("===============================\n");
	printf("1. Hitung Persegi\n");
	printf("2. Hitung Persegi panjang\n");
	printf("3. Hitung Segitiga\n");
	printf("4. Hitung Lingkaran\n");
	printf("5. Keluar\n");
	printf("============================<<0. back\n");
	printf("Pilihan Anda : ");scanf("%d",&pilih);
	printf("================================\n");
	switch(pilih){
		case 1 : menupersegi();
		break;
		case 2 : menupersegipanjang();
		break;
		case 3 : menusegitiga();
		break;
		case 4 : menulingkaran();
		break;
		case 5 : exit(0);
		break;
		default : printf("Pilihan Anda Salah!\n");
		}
printf("=================================\n");
printf("Kembali ke Menu Utama? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=================================\n");
	}while(ulang=='y' || ulang=='Y');
}
//Bidang Ruang
void bidangruang(){
int pilih;char ulang;
	do{
	printf("\n");
	printf("===============================\n");
	printf("perhitungan Bangun Ruang\n");
	printf("===============================\n");
	printf("1. Hitung Kubus\n");
	printf("2. Hitung Balok\n");
	printf("3. Hitung Tabung\n");
	printf("4. Hitung Bola\n");
	printf("5. Keluar\n");
	printf("============================<<0. back\n");
	printf("Pilihan Anda : ");scanf("%d",&pilih);
	printf("================================\n");
	switch(pilih){
		case 1 : menukubus();
		break;
		case 2 : menubalok();
		break;
		case 3 : menutabung();
		break;
		case 4 : menubola();
		break;
		case 5 : exit(0);
		break;
		case 0 : bidangdatar();
		break;
		default : printf("Pilihan Anda Salah!\n");
		}
printf("=================================\n");
printf("Kembali ke Menu Utama? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=================================\n");
	}while(ulang=='y' || ulang=='Y');
}
//awalan
int main(){
int pilih;char ulang;
	do{
    printf("=======================================================================================================================\n");
    printf ("\n\t\t\tSelamat datang di Program Kumpulan Penghtung Luas Bangun Datar dan Volume\n");
    printf ("\t\t\t\t\t  Program By Abdul Latif Munjiat (1610631170004)\n\n");
    printf ("\t\t\t\tKelas 2'A 2016 | Studi Teknik Informatika | Fakultas Ilmu Komputer\n");
    printf ("\t\t\t\t\t     Universitas Singaperbangsa Karawang\n");
    printf("=======================================================================================================================\n");;
	printf("Perhitungan Bidang Ruang & Datar\n");
	printf("===============================\n");
	printf("1. Bidang Datar\n");
	printf("2. Bidang Ruang\n");
	printf("3. Keluar\n");
	printf("================================\n");
	printf("Pilihan Anda : ");scanf("%d",&pilih);
	printf("================================\n");
	switch(pilih){
		case 1 : bidangdatar();
		break;
		case 2 : bidangruang();
		break;
		case 3 : exit(0);
		break;
		default : printf("Pilihan Anda Salah!\n");
		}
printf("=================================\n");
printf("Kembali ke Menu Utama? (y/t) : ");scanf("%c",&ulang);scanf("%c",&ulang);
printf("=================================\n");
	}while(ulang=='y' || ulang=='Y');
}
