#include<stdio.h>
//faktöriyel hesaplama fonksiyon olarak
void faktoriyerlHesapla(int s){
			int m;
			int sayi;
			int fakto=1;
			printf("sayi giriniz :");
			printf("sayiniz : %d\n",s);
			for(m=1;m<=s;m++){
				fakto*=m;
			}	
	printf("sonuc = %d",fakto);
	
}
int main(){
	//tek satýrda hepsi
	printf("ADIM\nSOYADIM\nElektrik-Elektronik");
	
	printf("Matematik iþlemleri\n(1)Topla\n(2)Cikarma\n(3)Carpma\n(4)bolme\n(5)mod alma\n");
	int secim;
	scanf("%d",&secim);
	//hesap makinasý
	switch(secim){		
		case 1:
			printf("Birinci Sayi");
			int birincisayi;
			scanf("%d",&birincisayi);
			
			printf("ikinci Sayi");
			int ikincisayi;
			scanf("%d",&ikincisayi);
			
			int toplam=birincisayi+ikincisayi;
			printf("Sonuc = %d",toplam);
			break;
		case 2:
			printf("Birinci Sayi");
			int birincisayia;
			scanf("%d",&birincisayia);
			
			printf("ikinci Sayi");
			int ikincisayia;
			scanf("%d",&ikincisayia);
			
			int cikarma=birincisayia-ikincisayia;
			printf("Sonuc = %d",cikarma);
			break;
		case 3:
			printf("Birinci Sayi");
			int birincisayib;
			scanf("%d",&birincisayib);
			
			printf("ikinci Sayi");
			int ikincisayib;
			scanf("%d",&ikincisayib);
			
			int carpama=birincisayib*ikincisayib;
			printf("Sonuc = %d",carpama);
			break;
			
		case 4:
			printf("Birinci Sayi");
			int birincisayic;
			scanf("%d",&birincisayic);
			
			printf("ikinci Sayi");
			int ikincisayic;
			scanf("%d",&ikincisayic);
			
			int bolme=birincisayic/ikincisayic;
			printf("Sonuc = %d",bolme);
			break;
		case 5:
			printf("Birinci Sayi");
			int birincisayid;
			scanf("%d",&birincisayid);
			
			printf("ikinci Sayi");
			int ikincisayid;
			scanf("%d",&ikincisayid);
			
			int mod=birincisayid%ikincisayid;
			printf("Sonuc = %d",mod);
			break;
			default:
				printf("geçersiz iþlem");
	}
	
	
	//not bulan program
	printf("vize sinavi : ");
			int vizesinavi;
			scanf("%d",&vizesinavi);
			
			printf("Final Sinavi :");
			int finalsinavi;
			scanf("%d",&finalsinavi);
			
			printf("Proje :");
			int proje;
			scanf("%d",&proje);
			
			double ortalama=(vizesinavi*0.3)+(finalsinavi*0.5)+(proje*0.2);
			printf("Ortlama =%.2f",ortalama);
			
			
			if(90<=ortalama && ortalama<100){
				printf(" Harf Notu ve ortalamaniz : AA %.2f",ortalama);
			}else if(80<=ortalama && ortalama<90 ){
				printf(" Harf Notu ve ortalamaniz : BA %.2f",ortalama);
			}
			else if(70<=ortalama && ortalama<80){
				printf(" Harf Notu ve ortalamaniz : BB %.2f",ortalama);
			}
			else if(60<=ortalama && ortalama<70){
				printf(" Harf Notu ve ortalamaniz : CB %.2f",ortalama);
			}
			else if(50<=ortalama && ortalama<60){
				printf(" Harf Notu ve ortalamaniz : CC %.2f",ortalama);
			}
			else if(40<=ortalama && ortalama<=49){
				printf(" Harf Notu ve ortalamaniz : DD %.2f",ortalama);
			}
			else {
				printf(" Harf Notu ve ortalamaniz : FF %.2f",ortalama);
			}
			//tek ve çift sayýlarýný ve toplamýný bulan
			int i;
			int toplam;
			int ciftSayisi;
			int tekSayisi;
			int ciftToplam;
			int tekToplam;
			for(i=0;i<=100;i++){
			if(i%2==0){
				ciftToplam+=i;
				ciftSayisi++;
			}else{
				tekToplam+=i;
				tekSayisi++;
			}
			toplam+=i;
			}
			
			printf("tek sayisi : %d\n",tekSayisi);
			printf("tek sayisi Toplami : %d\n",tekToplam);
			printf("cift  sayisi : %d\n",ciftSayisi);
			printf("cift toplam : %d\n",ciftToplam);
			printf("toplam sonucu : %d\n",toplam);
			
	//Faktöriyel hesapalama		
			int m;
			int sayi;
			int fakto=1;
			printf("sayi giriniz :");
			scanf("%d",&sayi);
			printf("sayiniz : %d\n",sayi);
			for(m=1;m<=sayi;m++){
				fakto*=m;
			}	
	printf("sonuc = %d",fakto);
	
	faktoriyerlHesapla(5);
	
	
	
}
