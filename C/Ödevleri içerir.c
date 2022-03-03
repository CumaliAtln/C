/*
***STRUCT VE FILE ÝSLEMLERÝ ÝLE ÝLGÝLÝ ÖRNEKLER ÇÖZÜLMEMÝÞTÝR****
*/


/**Dizi Pointer
1-	20 elemanlý bir dizi ve ondan küçük bir deðer girilecektir. ? 
	Girilen deðer kadar dizi elemanlarýnýn sonundan aldýðý deðeri baþýna ekleyen, 
	diðer elemanlarý kaydýran pointer kullanarak yapýnýz. */


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
	
	printf("Diziyi sondan parcalamak istediginiz noktayý seciniz...(1-20 aralýgý); ");
	scanf("%d", &parca); 
	
	diziParcalayan(parca, &dizi, 20); 
	
	return 0; 
}

/*	Kullanýcý 255'den küçük bir deðer girecektir. Girilen deðer uzunluðunda bir 
	sessiz bir sesli karakter birleþiminden oluþan string üreten fonksiyonu pointer 
	kullanarak yapýnýz*/
	


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
/*3-	10 elemanlý bir dizinin en  büyük, en küçük ve ortalama deðerini tek bir fonksiyon 
içinde her bir dönüþ deðeri için pointer kullanarak yapýnýz. 
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
1-	Klavyeden girilen bir string için  aranan bir harf deðeri girilecek ve harfin string 
	içinde ilk hangi numaralý karakterde ve kaç adet olduðu bir fonksiyon aracýlýðý ile 
	bulunacaktýr.
2-	Aranan karakterin string içinde geçtiði tüm konumlarý ayrý bir integer dizi 
	içerisinde tutan fonksiyonu da yazmaya çalýþýnýz.
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
*Baþlý baþýna bi alem ödev... :)
Ödev Programýnýz içinde 10 elemanlý nesne isimleri tutan bir char dizi oluþturunuz. Nesne[0], nesne[1]….
Klavyeden girilen bir  stringe (yeni), dizinin her elemanýnýn ne kadar benzediði ile ilgili aþaðýdaki gibi bir hesaplama yapýlacaktýr.
Klavyeden girilen  string’in içindeki her bir harf, nesne dizisindeki her eleman için kontrol edilerek, herhangi bir eleman içerisinde ayný konumda ise,  benzerlik deðeri : 3
Olmasý gereken konumun bir ileri veya gerisinde ise benzerlik deðeri: 2
Harf var ama ileri/geri konumdan daha farklý bir konumda ise benzerlik deðeri:1
Harf hiç yok ise:0 deðeri ile bir benzerlik deðeri hesaplanacaktýr. Bu benzerlik deðerine göre en büyük benzerlik deðerine sahip dizi elemanýnýn hangisi olduðu görüntülenecektir. 
Girilen nesne dizisi: kalem, kitap……
Klavyeden girilen: karpuz……. 
Karpuz…. Kalem benzerlik deðeri: (k … k ayný konumda:3, a…a ayný konumda:3
3+3=6
Karpuz…Kitap  benzerlik deðeri: (k … k ayný konumda:3, a…a ayný konumda deðil:1
P…..p bir sonraki konumda: 2
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
Metin (en fazla 20 karakter) , uzunluðu, sesli sayýsý, sessiz sayýsý gibi alanlarýn olduðu 15 elemanlý  bir struct dizisi tanýmlayýnýz.
?
Deðer atama: Bu struct içerisine öncelikle deðer giriþi yapan  veya deðerleri program içinde atayan atayan bir fonskiyon yazýnýz.
Hesap: struct’ýn uzunluk, sesli ve sessiz harf sayýsýný tutan deðerlerin otomatik hesaplanmasý ve atanmasý ile ilgili iþlemleri yapan ayrý bir fonksiyon yazýnýz.
Görüntüleme: Program sonunda ise struct elemanlarýný bir fonksiyon aracýlýðý ile yazdýrýnýz.
Benzerlik: Geçen hafta yazdýðýnýz benzerlik fonksiyonunu kullanarak birbirine en çok benzeyen dizi elemanýnýn hangileri olduðunu  ve benzerlik deðerini ekrana yazdýrýnýz.

Eleman limon uzunluk: 5, sesli harf: 2 sessiz harf: 3
Eleman bilgisayar uzunluk: 10 sesli harf: 4 sessiz harf: 6
Eleman liman uzunluk: 5, sesli harf: 2 sessiz harf: 3
…….

Benzerlik:   En çok benzeyen elemanlar   limon ile liman  Benzerlik deðei:12
*//*
*Structs*
a) Klavyeden girilen basamak sayýsý 6 olan bir sayýyý metin ile ekrana yazan programý struct kullanarak yapýnýz
b) Klavyeden girilen basamak sayýsý bilinmeyen bir sayýyý metin olarak yazdýran programý yapýnýz. 
512 girildiyse:Metin olarak " Beþ yüz on iki " yazacak program.
*//*
*Dosyalama*
Aþaðýdaki örnek bir sessiz, bir sesli olacak þekilde karakter dizisi oluþturabilmektedir.

a) Bu fonksiyonu veya kendi yazacaðýnýz fonksiyonu kullanarak 15 adet, 6 karakter uzunluðunda string deðer ve 20 ile 100 arasýnda ID deðeri oluþturarak, bu deðerleri sýralý eriþimli bir dosyaya kayýt ediniz.

Id ve string deðerleri aþaðýdaki gibi olacaktýr…

45 semred

67 amidad

75 senided ….

b) Verilerinizi öncelikle Id deðerine göre sýralayýnýz sýralanmýþ halini ayrý bir dosyaya yazýnýz ve dosyayý okuyarak ekrana listeleyiniz.

c) Verilerinizi string deðerlerine alfabetik olarak sýralayýnýz ve sýralanmýþ halini ayrý bir dosyaya yazýnýz ve dosyayý okuyarak ekrana listeleyiniz.

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
