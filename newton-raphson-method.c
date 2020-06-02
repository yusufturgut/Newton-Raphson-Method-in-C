//Yusuf Turgut

#include<stdio.h>   // Gerekli kütüphanaler
#include<conio.h>   
#include<math.h>
#include<stdlib.h>  

/* Fonksiyonun tanýmlanmasý */
#define    f(x)     pow(x,3)-2*pow(x,2)-5

/* Fonksiyonun türevinin tanýmlanmasý */
#define   g(x)   3*x*x - 4*x

int main()
{
	 /* Input deðerlerinin yazýlmasý*/
	 float x0=2, x1, f0, f1, g0, e=0.01;
	 int adim = 0, N;
	 

/* Newton Raphson Method'unun kullanýlmasý */
	 printf("\nAdim\t\tx0\t\tx1\t\tHata\n");  //çýktý baþlýklarýnýn yazdýrýlmasý
	 do
	 {
		  g0 = g(x0);   //degiskeneler icine fonks. degiskenlerin atanmasý
		  f0 = f(x0);
		  
		  if(g0 == 0.0)   //türev kontrolü. Eðer türev sýfýr (0) ise hata verilecek.
		  {	
			   printf("Hata.");
			   exit(0);
		  }

		  x1 = x0 - f0/g0;  //metodun uygulanmasý
		  
		  	adim++;  //adim degerinin her döngüde arttýrýlmasý
			float degerHata=fabs(x1-x0); // hata deðerinin tanýmlanmasý
			
			
			
		  printf("%d\t\t%f\t%f\t%f\n",adim,x0,x1,degerHata); //istenilen çýktýlarýn yazdýrýlmasý
		  x0 = x1;
		  f1 = f(x1);  //degiskenler içerisine gerekli deðerlerin atanmasý
		  
	 }
	 
	 
	 while(fabs(f1)>e);  //hata kontrolü
	
	 printf("\nSonuc : %f", x1);  //sonucun yazdýrýlmasý
	 getch();
}
