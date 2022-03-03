/*
***STRUCT VE FILE �SLEMLER� �LE �LG�L� �RNEKLER ��Z�LMEM��T�R****
*/


/**Dizi Pointer
1-	20 elemanl� bir dizi ve ondan k���k bir de�er girilecektir. ? 
	Girilen de�er kadar dizi elemanlar�n�n sonundan ald��� de�eri ba��na ekleyen, 
	di�er elemanlar� kayd�ran pointer kullanarak yap�n�z. */


void diziParcalayan(int parca, int *dizi, int boyut){ 
	
	int parca1 = boyut - parca;
	int dizi1[parca1], dizi2[parca];
	int i;
	
	
	for(i=0; i<parca1; i++){
		dizi1[i]=dizi[i];	
		printf("%d\n", dizi1[i]);
	}

	for(i=0; i<parca; i++){
		dizi2[i] = dizi[i+parca1];
		printf("%d\n",dizi2[i]);
	}
	
	printf("**********************************\n");
	
	for(i=0; i<boyut; i++){
		if(0<i<parca)
			dizi[i] = dizi2[i];
		if(parca<=i<boyut)
			dizi[i] = dizi1[i-parca];
	}
	
	for(i=0; i<boyut; i++){
		printf("%d\n", dizi[i]); 
	}
}

int main(){
	int dizi[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	//,11,12,13,14,15,16,17,18,19,20
	int i,parca;
	
	printf("Diziyi sondan parcalamak istediginiz noktay� seciniz...(1-20 aral�g�); ");
	scanf("%d", &parca); 
	
	diziParcalayan(parca, &dizi, 20); 
	
	return 0; 
}

/*	Kullan�c� 255'den k���k bir de�er girecektir. Girilen de�er uzunlu�unda bir 
	sessiz bir sesli karakter birle�iminden olu�an string �reten fonksiyonu pointer 
	kullanarak yap�n�z*/
	


char kelimeUret(int boyut, char *sessiz, char *sesli){
	int i;
	char kelime[boyut];
	srand(time(NULL));
	
	for(i=0; i<boyut; i++){
		if(i%2==1){
			kelime[i] = sessiz[rand()%19];
		}else{
			kelime[i] = sesli[rand()%4];
		}
		printf("%c ", kelime[i]);
	}
		
}


int main(){
	
	int boyut;
	char sessiz[]={'q','w','r','t','y','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
	char sesli[]={'e','u','o','a','i'};
	
	printf("0-255 arasi bir deger tanimlayiniz; ");
	scanf("%d", &boyut);
	
	kelimeUret(boyut, &sessiz, &sesli);	
	
	return 0; 
}*/
/*3-	10 elemanl� bir dizinin en  b�y�k, en k���k ve ortalama de�erini tek bir fonksiyon 
i�inde her bir d�n�� de�eri i�in pointer kullanarak yap�n�z. 
Fonksiyon Protopi: Hesap (int a[], int n , int enb, int enk, float *ort);
*/

void hesap(int *a, int n){//float *ort
	int j, i, enb = 0, enk;
	for(i=0; i<n; i++)
		if(a[i]>enb)
			enb =  a[i];
			printf("%d, enbuyuktur\n", enb);
	for(i=0; i<n; i++)
		for(j=i+1; j<n; j++)
			if(a[j]>a[i])
				enk = a[i];
				printf("%d, enkucuktur\n", enk);
				
	int toplam=0; 
	for(i=0; i<n; i++)
		toplam+=a[i];
	float ort = toplam/n;
	printf("ortalama; %f", ort);
}

int main(){
	int a[10] = {8,9,4,10,7,5,2,6,1,3};
	hesap(&a, 10);
	
	return 0;
}	

/*
1-	Klavyeden girilen bir string i�in  aranan bir harf de�eri girilecek ve harfin string 
	i�inde ilk hangi numaral� karakterde ve ka� adet oldu�u bir fonksiyon arac�l��� ile 
	bulunacakt�r.
2-	Aranan karakterin string i�inde ge�ti�i t�m konumlar� ayr� bir integer dizi 
	i�erisinde tutan fonksiyonu da yazmaya �al���n�z.
*/

char bul(char kelime[], int boyut, char *ifade){
	int i,j,a=0, toplam=0;
	int boyut2=0, dizi[boyut2];
	
	for(i=0; i<boyut; i++){
		if(kelime[i] == *ifade){
			a++;
			boyut2++;
			for(j=a; j<boyut2;j++){
				dizi[j]=i;	
			}			
			toplam++;		
		}
	}
	for(j=0; j<boyut2; j++){
		printf("%d. indis...\n",j, dizi[j]);
	}
	

	printf("\n%s kelimesinde, %c ifadesi, %d adet bulunmaktadir...", kelime, *ifade, toplam);
	//printf("\nilk olarak %d. indiste gorulmus", dizi[1]);
}

int main(){
	char kelime[50];
	printf("Lutfen kelime girdisi yapiniz...\n");
	gets(kelime);
	int a = strlen(kelime);
	char ifade;
	
	printf("Lutfen string icerisinde aradiginiz char ifadeyi seciniz; ");
	scanf("%c", &ifade);
	
	//printf("kelime; %s, ifade; %c", kelime, ifade);
	
	bul(&kelime, a, &ifade);
	return 0;
}	
/*
*Ba�l� ba��na bi alem �dev... :)
�dev Program�n�z i�inde 10 elemanl� nesne isimleri tutan bir char dizi olu�turunuz. Nesne[0], nesne[1]�.
Klavyeden girilen bir  stringe (yeni), dizinin her eleman�n�n ne kadar benzedi�i ile ilgili a�a��daki gibi bir hesaplama yap�lacakt�r.
Klavyeden girilen  string�in i�indeki her bir harf, nesne dizisindeki her eleman i�in kontrol edilerek, herhangi bir eleman i�erisinde ayn� konumda ise,  benzerlik de�eri : 3
Olmas� gereken konumun bir ileri veya gerisinde ise benzerlik de�eri: 2
Harf var ama ileri/geri konumdan daha farkl� bir konumda ise benzerlik de�eri:1
Harf hi� yok ise:0 de�eri ile bir benzerlik de�eri hesaplanacakt�r. Bu benzerlik de�erine g�re en b�y�k benzerlik de�erine sahip dizi eleman�n�n hangisi oldu�u g�r�nt�lenecektir. 
Girilen nesne dizisi: kalem, kitap��
Klavyeden girilen: karpuz��. 
Karpuz�. Kalem benzerlik de�eri: (k � k ayn� konumda:3, a�a ayn� konumda:3
3+3=6
Karpuz�Kitap  benzerlik de�eri: (k � k ayn� konumda:3, a�a ayn� konumda de�il:1
P�..p bir sonraki konumda: 2
3+1+2=6 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void hesap(char **nesne, int b1,int b2, int yeniBoyut, char *yeniNesne){
	int i,j,k;
	
	for(i=0; i<b1; i++){
		int toplam = 0;
		for(j=0; j<b2; j++){
			for(k=0; k<yeniBoyut; k++){
				if(yeniNesne[k] == nesne[i][j]){
					toplam+=3;
				}else if(yeniNesne[k] == nesne[i][j-1]){
					toplam+=2;
				}else if(yeniNesne[k] == nesne[i][j+1]){
					toplam+=2;
				}else if(yeniNesne[k] != nesne[i][j]){
					toplam+=0;
				}else{			
					toplam+=1;
				}
			}
		}
	//	return toplam;
	printf("%s, %s nesnesi ile benzerlik degeri; %d\n",yeniNesne,nesne[i], toplam);
	}
}

int main(){
	char nesne1[10][50]={"sarj","kablo","telefon","bilgisayar","television","sandalye","masa","gunbatimi","anne","baba"};
	char **nesne = (char **) malloc(10 * sizeof(char*));
	char yenikelime[50];
	
	
	printf("Lutfen bir kelime girisi yapiniz...");
	gets(yenikelime);
	int len = strlen(yenikelime);
	
	printf("%s ile benzerlik oranlari...\n",yenikelime);
	int i,j;
	for(i=0; i<10; i++){
		nesne[i] = (char *) malloc(10* sizeof(char));
		for(j=0; j< 50; j++){
			nesne[i]=nesne1[i];
		}
		//printf("%s\t%d\n", nesne[i], hesap(nesne, 10, 50, len, &yenikelime));
	}
	
	for(i=0; i<10; i++){
		hesap(nesne, 10, 50, len, &yenikelime);
	}
	return 0;
}
/*
*Structs*
Metin (en fazla 20 karakter) , uzunlu�u, sesli say�s�, sessiz say�s� gibi alanlar�n oldu�u 15 elemanl�  bir struct dizisi tan�mlay�n�z.
?
De�er atama: Bu struct i�erisine �ncelikle de�er giri�i yapan  veya de�erleri program i�inde atayan atayan bir fonskiyon yaz�n�z.
Hesap: struct��n uzunluk, sesli ve sessiz harf say�s�n� tutan de�erlerin otomatik hesaplanmas� ve atanmas� ile ilgili i�lemleri yapan ayr� bir fonksiyon yaz�n�z.
G�r�nt�leme: Program sonunda ise struct elemanlar�n� bir fonksiyon arac�l��� ile yazd�r�n�z.
Benzerlik: Ge�en hafta yazd���n�z benzerlik fonksiyonunu kullanarak birbirine en �ok benzeyen dizi eleman�n�n hangileri oldu�unu  ve benzerlik de�erini ekrana yazd�r�n�z.

Eleman limon uzunluk: 5, sesli harf: 2 sessiz harf: 3
Eleman bilgisayar uzunluk: 10 sesli harf: 4 sessiz harf: 6
Eleman liman uzunluk: 5, sesli harf: 2 sessiz harf: 3
��.

Benzerlik:   En �ok benzeyen elemanlar   limon ile liman  Benzerlik de�ei:12
*//*
*Structs*
a) Klavyeden girilen basamak say�s� 6 olan bir say�y� metin ile ekrana yazan program� struct kullanarak yap�n�z
b) Klavyeden girilen basamak say�s� bilinmeyen bir say�y� metin olarak yazd�ran program� yap�n�z. 
512 girildiyse:Metin olarak " Be� y�z on iki " yazacak program.
*//*
*Dosyalama*
A�a��daki �rnek bir sessiz, bir sesli olacak �ekilde karakter dizisi olu�turabilmektedir.

a) Bu fonksiyonu veya kendi yazaca��n�z fonksiyonu kullanarak 15 adet, 6 karakter uzunlu�unda string de�er ve 20 ile 100 aras�nda ID de�eri olu�turarak, bu de�erleri s�ral� eri�imli bir dosyaya kay�t ediniz.

Id ve string de�erleri a�a��daki gibi olacakt�r�

45 semred

67 amidad

75 senided �.

b) Verilerinizi �ncelikle Id de�erine g�re s�ralay�n�z s�ralanm�� halini ayr� bir dosyaya yaz�n�z ve dosyay� okuyarak ekrana listeleyiniz.

c) Verilerinizi string de�erlerine alfabetik olarak s�ralay�n�z ve s�ralanm�� halini ayr� bir dosyaya yaz�n�z ve dosyay� okuyarak ekrana listeleyiniz.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char string(int deger,char *ptr1,char *ptr2)
{
int i,j;
srand(time(0));
for(i=0;i<deger;i++)
{
if(i%2==0)
{j=rand()%18; printf("%c",*(ptr2+j));}
if(i%2==1)
{j=rand()%5; printf("%c",*(ptr1+j));}
}
}
int main()
{
char sesli[6]="aeiou";
char sessiz[19]="bcdfghjklmnprstvyz";
char *ptr1,*ptr2;
int deger;
ptr1=&sesli[0];
ptr2=&sessiz[0];
printf("karakter uzunlugunu girin:");
scanf("%d",&deger);
string(deger,ptr1,ptr2);
}
*/
