#include<stdio.h>
#include<time.h>
#include<math.h>
/*
14--Perm�tasyon hesaplayan form�l� fonksiyon kullanarak c kodlar�n� yaz�n�z.
P(n,r) = n! / (n-r)!
*/
int main(){
	
	int r, n, i, res, res2;
	printf("Permutasyon formulu; P(n,r) = n! / (n-r)!\n'n' ve 'r' sayisini giriniz; ");
	scanf("%d %d", &n, &r);
	
	if(n!=0){
		
			for (i = 1; i <= n; i++){
        	    res *= i;
			}
		
			for (i = 1; i <= n-r; i++){
        	    res2 *= i;
			}
			int result = res/res2;
			printf("%d", result);	
	}else if(n==0){
		res = 1;
		printf("%d", res);
	}

	return 0;
}

/*
15--Kombinasyon hesaplayan program� fonksiyon kullanarak yaz�n�z.

16--D��ar�dan girilen bir say�n�n yine d��ar�dan girilen �ss�n� hesaplayan program� fonksiyon kullanarak yap�n�z.

17--Bir A��n�n Kosin�s�n� Hesaplayan C Program�.

18--N x M boyutlu matristeki en b�y�k eleman� ve bu eleman�n sat�r ve s�t�n adresini bulan C program�.

19--NxN boyutlu bir matrisin esas k��egenin elemanlar�n�n toplam�n� bulan C program�

20--NxM boyutlu iki matrisin toplam�n� bulan c program�.

21--NxN boyutlu bir matrisin s�tunlar� toplam�n� ba�ka bir diziye atayan c program�.

22--D��ar�dan girilen NxN boyutlu bir matriste baz� hatalar olu�mu�tur. Bu hatalar s�f�r ile g�sterilmi�tir. Her sat�rda ka� tane hata oldu�unu bulan c program�.

23--D��ar�dan girilen NxN boyutlu bir kare matrisin simetrik olup olmad���n� bulan c program�.

24--D��ar�dan girilen NxN boyutlu bir kare matrisin transpozesini bulan c program�.

25--D��ar�dan girilen N say�s�na g�re NxN tipinde birim matris olu�turan c program�.

5--Fibonacci Say�lar�n� d��ar�dan girilen N say�s� kadar yazan c program�.

6--N elemanl� bir dizideki tek elemanlar� dizinin ba��na �ift elemanlar� dizinin sonuna ta��yan c program�.

9--D��ar�dan girilen N elemanl� bir dizinin aritmetik, geometrik ve harmonik ortalamas�n� hesaplayan program.

10+-Bir dizideki elemanlar�n standart sapmas�n� ve varyans�n� bulan program.
**************************************************************************************************************************************************************************
1++N elemanl� bir dizideki elemanlar�n toplam�n� bulan program
2++N elemanl� bir dizideki pozitif elemanlar�n ortalamas�n� bulan program.
3++N elemanl� bir dizideki en k���k eleman� ve bu eleman�n adresini bulan program.
4++D��ar�dan girilen N elemanl� bir diziyi tersine �eviren program.
7++D��ar�dan girilen N boyutlu A ve B vekt�rlerinin skaler �arp�m�n� hesaplayan c program�.
8++D��ar�dan girilen n elemanl� bir dizideki en b�y�k eleman� en k���k eleman� ve en b�y�k elemanla en k���k eleman aras�ndaki fark� bulan c program�.
12++D��ar�dan girilen N elemanl� bir dizideki tek indisli elemanlar�n�n ba�ka bir diziye atayan program.
13++D��ar�dan girilen bir X de�erinin yine d��ar�dan girilen N elemanl� bir dizideki elemanlardan hangisine en yak�n oldu�unu bulan program.

*/
