#include<stdio.h>
#include<conio.h>
//deklarasi struct
struct cek_kabisat
{
 int bulan;
 int tahun;
}kbst;

//deklarasi variabel
int jml_hari;

main()
{
 static int jum_hari[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 clrscr();
 printf("Masukan data bulan [1..12] 	= ");
 scanf("%d",&kbst.bulan); fflush(stdin);
 printf("Masukan tahunnya		= ");
 scanf("%d",&kbst.tahun); fflush(stdin);

 if(kbst.bulan==2)
 {
  if((kbst.tahun % 4 == 0) && (kbst.tahun % 100 != 0))
    jml_hari=29;
  else
    jml_hari=28;
 }
 else
  jml_hari=jum_hari[kbst.bulan-1];

 printf("Jumlah hari 			= %d",jml_hari);
 getch();
 return 0;
}