#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
	
int main() {
	//DEKLARASI
	int a,b,c,i,j,k,n,x,y,hasil,mean,median,modus,Q1,Q2,Q3,operasi,xi,xbar,N,xd,frek[xd];
	double var,std,fx,data;
	system("color A");
	printf(" _______________________________________________________________________________________________________\n");
	printf("|   	    	        	 TABEL DATA SURVEY PAJAK ATAU TARIF KENDARAAN			      	|\n");
	printf("|_______________________________________________________________________________________________________|\n");
	printf("|   NO     |	      NAMA MAHASISWA	     |        NPM       |	Kota Asal       |       Jawaban |");
	printf("\n|__________|_________________________________|__________________|_______________________|_______________|\n");
	
	int no[51]={0,1	,2	,3	,4	,5	,6	,7	,8	,9	,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	
	char nama[51][51]={"","Sherli Nur Diana	","Jefri A Ismail		","Meike Hardianti		","Hudanto R.H		","Yusa Nur A		","Dewi Azizah		","Fahmi A.D		",
	"Ilham Ananda Rey	","Arif Samdono		","Anindya K.A.P		","Benaya Arta H		","Ade Husni M		","Yunus Oktavianto I	","Nadia Ristya D		","Sunu Ilham P		",
	"Dendy Fektor O		","Moch Hawin H		","Fahmi Nugroho A		","Heri Khariono		","Irsyad Zainul H		","Shavira Maya		","Ahmad Wahyu Rafsan	","Fatwa Zuhri Diva P	",
	"Naufal Akmal		","Annisa Dwi P		","Amir Muhammad H		","Fajar Andhika I		","Dicky Giancini		","Cherry Daniella		","Fairuz Aditya J.R	","Faradella		",
	"Syafrida M.H		","Helna Freecenta		","Dio Farrel P.R		","Fajar Wirahadi K	","Moch. Nabil Nugraha .R	","Ahmad Andhika P		","Dedy Ramadhan		",
	"Rizqi Yahya M		","Susy Rahmawati		","Elsa Febriantika	","Dwi Nurhidayah		","Emilia Eka F		","Berlianda		","Nur Syifa'ul H		","M. Rafi Ramadhan	",
	"Tasya Ardhian Nisaa'	","Handie Pramana P	","Sarirotul Latifah	","Miftahul Nuril S	"};
	
	char npm[51][51]={"","18081010005","18081010059","18081010031","18081010087","18081010138","18081010043","18081010128","17081010084","18081010062","18081010098","18081010037",
	"18081010039","18081010022","18081010071","17081010045","18081010076","18081010038","18081010065","18081010002","18081010007","18081010050","19081010119","19081010059",
	"19081010120","19081010028","17081010051","17081010054","17081010062","17081010047","17081010061","17081010095","17081010066","18081010109","19081010144","19082010072",
	"19082010084","19082010076","18081010020","18081010014","18081010048","19081010028","18081010030","18081010026","18081010051","18081010042","17081010096","18081010049",
	"18081010023","18081010045","18081010040"};	
	
	char asal[51][51]={"","Lamongan","Surabaya","Jombang	","Mojokerto","Bojonegoro","Bojonegoro","Sidoarjo","Sidoarjo","Surabaya","Surabaya","Nganjuk	","Surabaya","Surabaya",
	"Surabaya","Sidoarjo","Ngawi	","Tulung Agung","Surabaya","Lamongan","Sidoarjo","Nganjuk	","Mojokerto","Lamongan","Pemalang","Sidoarjo","Surabaya","Tuban	","Surabaya","Surabaya",
	"Surabaya","Surabaya","Samarinda","Malang	","Sidoarjo","Gresik	","Surabaya","Gresik	","Surabaya","Surabaya","Bojonegoro","Jombang	","Magetan	","Surabaya","Surabaya","Bojonegoro",
	"Tuban	","Surabaya","Surabaya","Pasuruan","Pasuruan"};
	
	int jawab[51]={0,450000,400000,345000,300000,300000,300000,300000,300000,300000,300000,270000,250000,250000,250000,242000,231500,230000,218000,200000,200000,200000,
	200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,200000,194000,180000,170000,170000,160000,150000,150000,150000,
	150000,130000,100000,100000,100000};
	
	for(i=1;i<51;i++){
		printf("|   %d 	   |	%s     |	%s	|	%s	|	%i	|\n", no[i],nama[i],npm[i],asal[i],jawab[i]);
	}
	printf("|__________|_________________________________|__________________|_______________________|_______________|\n\n");

	//RUMUS STATISTIKA	
	printf(" HASIL = \n\n");
	//Modus	
	N=51;
	xd=jawab[N];
	for(a=1;a<=N;a++){
		if(xd==a){
			frek[a]=frek[a]+1;
		}
		for(b=a+6;b<=N;b++){
		if(frek[b]>N){
			y=frek[a];
		}
	}
	x=y;
	}
	modus=x;
	printf("\tModus (N.Sering Muncul)\t: %d\n",modus);
	
	//Median
	n=50;
	operasi = n/2;
	hasil = jawab[operasi];
	median = hasil;
	printf("\tMedian (N.tengah)\t: %d\n",median);
	
	//Mean
	n=50;
	for(i=0;i<=n;i++){
	data = data+jawab[i];
	}
	mean = data/n;
	printf("\tMean (N.rata2)\t\t: %d\n",mean);
	
	//Quartil Atas (Q3)
	n=50;
	operasi = n*3/4;
	Q3 = jawab[operasi];
	printf("\tQuartil Atas (Q3)\t: %d\n",Q3);
	
	//Quartil Tengah (Q2)
	n=50;
	operasi = n*2/4;
	Q2 = jawab[operasi];
	printf("\tQuartil Tengah (Q2)\t: %d\n",Q2);
	
	//Quartil Bawah (Q1)
	n=50;
	operasi = n*1/4;	
	Q1 = jawab[operasi];
	printf("\tQuartil Bawah (Q1)\t: %d\n",Q1);
	
	//Varian
	n=50;
	xbar=mean;
	for(j=0;j<n;j++){
		xi=jawab[j];
		fx=fx+pow(xi-xbar,2);
	}
	var=fx/(n-1);
	printf("\tVarian\t\t\t: %.0lf\n",var);
	
	//Standar Deviasi
	std= sqrt(var);
	printf("\tStandar Deviasi\t\t: %.5lf\n",std);
	
	
	int survei[18]={100000,130000,150000,160000,170000,180000,194000,200000,218000,230000,231500,242000,250000,270000,300000,345000,400000,450000};
	//Grafik Frekuensi
	printf("\n\n ==========================================================================================================================================================================\n");
	printf(" ==========================================================================================================================================================================\n\n\n");
		printf(" GRAFIK FREKUENSI = \n\n");	
		printf("\t    |    \n");	
		printf("\t 20 |    \n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t 18 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t 16 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t 14 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t 12 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t 10 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t  8 |                                                            ******\n");
		printf("\t    |                                                            ******\n");
		printf("\t    |                                                            ******                                                  ******\n");
		printf("\t  6 |                                                            ******                                                  ******\n");
		printf("\t    |                                                            ******                                                  ******\n");
		printf("\t    |                                                            ******                                                  ******\n");
		printf("\t  4 |                    ******                                  ******                                                  ******\n");
		printf("\t    |                    ******                                  ******                                                  ******\n");
		printf("\t    |    ******          ******                                  ******                                  ******          ******\n");
		printf("\t  2 |    ******          ******          ******                  ******                                  ******          ******\n");
		printf("\t    |    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t  0 |___________________________________________________________________________________________________________________________________________________\n");
		printf("\t\t");
			for(i=0;i<18;i++){
				printf(" %d ",survei[i]);
			}
	
	//Grafik Frekuensi Kumulatif
		printf("\n\n\n\n\n GRAFIK FREKUENSI KUMULATIF = \n\n");	
		printf("\t    |    \n");
		printf("\t 60 |    \n");
		printf("\t    |    \n");
		printf("\t    |    \n");
		printf("\t    |    \n");
		printf("\t 50 |                                                                                                                                            ******\n");
		printf("\t    |                                                                                                                                    ******  ******\n");
		printf("\t    |                                                                                                                            ******  ******  ******\n");
		printf("\t    |                                                                                                                    ******  ******  ******  ******\n");
		printf("\t    |                                                                                                                    ******  ******  ******  ******\n");
		printf("\t    |                                                                                                                    ******  ******  ******  ******\n");
		printf("\t    |                                                                                                                    ******  ******  ******  ******\n");
		printf("\t    |                                                                                                                    ******  ******  ******  ******\n");
		printf("\t 40 |                                                                                                            ******  ******  ******  ******  ******\n");
		printf("\t    |                                                                                                    ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                                                            ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                                                    ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                                            ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                            ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t 30 |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t 20 |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                            ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t 10 |                            ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                            ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |                    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t    |    ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******  ******\n");
		printf("\t  0 |___________________________________________________________________________________________________________________________________________________\n");
		printf("\t\t");
			for(i=0;i<18;i++){
				printf(" %d ",survei[i]);
			}
	
	return 0;
}
//Copyright (C) Pengolahan Data by Devan All Rights Reserved
