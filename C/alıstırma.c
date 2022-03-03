#include<stdio.h>
#include<time.h>
#include<math.h>
/*
14--Permütasyon hesaplayan formülü fonksiyon kullanarak c kodlarýný yazýnýz.
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
15--Kombinasyon hesaplayan programý fonksiyon kullanarak yazýnýz.

16--Dýþarýdan girilen bir sayýnýn yine dýþarýdan girilen üssünü hesaplayan programý fonksiyon kullanarak yapýnýz.

17--Bir Açýnýn Kosinüsünü Hesaplayan C Programý.

18--N x M boyutlu matristeki en büyük elemaný ve bu elemanýn satýr ve sütün adresini bulan C programý.

19--NxN boyutlu bir matrisin esas köþegenin elemanlarýnýn toplamýný bulan C programý

20--NxM boyutlu iki matrisin toplamýný bulan c programý.

21--NxN boyutlu bir matrisin sütunlarý toplamýný baþka bir diziye atayan c programý.

22--Dýþarýdan girilen NxN boyutlu bir matriste bazý hatalar oluþmuþtur. Bu hatalar sýfýr ile gösterilmiþtir. Her satýrda kaç tane hata olduðunu bulan c programý.

23--Dýþarýdan girilen NxN boyutlu bir kare matrisin simetrik olup olmadýðýný bulan c programý.

24--Dýþarýdan girilen NxN boyutlu bir kare matrisin transpozesini bulan c programý.

25--Dýþarýdan girilen N sayýsýna göre NxN tipinde birim matris oluþturan c programý.

5--Fibonacci Sayýlarýný dýþarýdan girilen N sayýsý kadar yazan c programý.

6--N elemanlý bir dizideki tek elemanlarý dizinin baþýna çift elemanlarý dizinin sonuna taþýyan c programý.

9--Dýþarýdan girilen N elemanlý bir dizinin aritmetik, geometrik ve harmonik ortalamasýný hesaplayan program.

10+-Bir dizideki elemanlarýn standart sapmasýný ve varyansýný bulan program.
**************************************************************************************************************************************************************************
1++N elemanlý bir dizideki elemanlarýn toplamýný bulan program
2++N elemanlý bir dizideki pozitif elemanlarýn ortalamasýný bulan program.
3++N elemanlý bir dizideki en küçük elemaný ve bu elemanýn adresini bulan program.
4++Dýþarýdan girilen N elemanlý bir diziyi tersine çeviren program.
7++Dýþarýdan girilen N boyutlu A ve B vektörlerinin skaler çarpýmýný hesaplayan c programý.
8++Dýþarýdan girilen n elemanlý bir dizideki en büyük elemaný en küçük elemaný ve en büyük elemanla en küçük eleman arasýndaki farký bulan c programý.
12++Dýþarýdan girilen N elemanlý bir dizideki tek indisli elemanlarýnýn baþka bir diziye atayan program.
13++Dýþarýdan girilen bir X deðerinin yine dýþarýdan girilen N elemanlý bir dizideki elemanlardan hangisine en yakýn olduðunu bulan program.

*/
