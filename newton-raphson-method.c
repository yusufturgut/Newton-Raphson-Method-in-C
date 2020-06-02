//Yusuf Turgut

#include<stdio.h>   // Gerekli k�t�phanaler
#include<conio.h>   
#include<math.h>
#include<stdlib.h>  

/* Fonksiyonun tan�mlanmas� */
#define    f(x)     pow(x,3)-2*pow(x,2)-5

/* Fonksiyonun t�revinin tan�mlanmas� */
#define   g(x)   3*x*x - 4*x

int main()
{
	 /* Input de�erlerinin yaz�lmas�*/
	 float x0=2, x1, f0, f1, g0, e=0.01;
	 int adim = 0, N;
	 

/* Newton Raphson Method'unun kullan�lmas� */
	 printf("\nAdim\t\tx0\t\tx1\t\tHata\n");  //��kt� ba�l�klar�n�n yazd�r�lmas�
	 do
	 {
		  g0 = g(x0);   //degiskeneler icine fonks. degiskenlerin atanmas�
		  f0 = f(x0);
		  
		  if(g0 == 0.0)   //t�rev kontrol�. E�er t�rev s�f�r (0) ise hata verilecek.
		  {	
			   printf("Hata.");
			   exit(0);
		  }

		  x1 = x0 - f0/g0;  //metodun uygulanmas�
		  
		  	adim++;  //adim degerinin her d�ng�de artt�r�lmas�
			float degerHata=fabs(x1-x0); // hata de�erinin tan�mlanmas�
			
			
			
		  printf("%d\t\t%f\t%f\t%f\n",adim,x0,x1,degerHata); //istenilen ��kt�lar�n yazd�r�lmas�
		  x0 = x1;
		  f1 = f(x1);  //degiskenler i�erisine gerekli de�erlerin atanmas�
		  
	 }
	 
	 
	 while(fabs(f1)>e);  //hata kontrol�
	
	 printf("\nSonuc : %f", x1);  //sonucun yazd�r�lmas�
	 getch();
}
