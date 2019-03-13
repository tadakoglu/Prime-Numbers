/*//********************************************SORU-1************************************************
#include <stdio.h>
#include <conio.h>
bool asalsayi(int );
void main()
{
	int N,counter;
	counter =0;
	printf("Enter the number:");
	scanf_s("%d", &N);
	while (N < 0)
	{
		printf("Enter a proper(positive) number please:");
		scanf_s("%d", &N);
	}
	printf("Girdiginiz sayi %d'e kadar olan asal sayilar:\n", N);
	for (int i = 2; i <= N; i++)
	{
		if(asalsayi(i))  // asal sayi ise yazdýrma kontrolü
		{
		counter++; // asal sayý sayacý
		printf("%d ", i);
		}
	}
	printf("\nAdet: %d", counter);
	_getch();
	
}
bool asalsayi(int N)
{	
	for (int i = 2; i <= N-1 ; i++)
	{
		if(N % i == 0)
		return false;

	}
	return true;
	
}
//*********************************************SORU-1***********************************************/

/*////////////////////////////////////////// SORU -2 ////////////////////////////
#include <stdio.h>
#include <conio.h>
void main()
{
	double  A = 10000000; // %25
	double  B = 40000000; // %12 increase rates: artýþ oranlarý
	// a ülkesi b yi kaç yýl sonra geçer
	int yil = 0;

	///////////////////WHILE ILE////////////////////////
	printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	while(A <= B) // 1,3 // 2,1 artýþ hýzý ; 1,3,5,7 : 3,4,5,6
	{
		A = A + A*(double)25/100;
		B = B + B*(double)12/100;
		yil++;
	 printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	}

	///////////////////FOR ILE////////////////////////
	//
	//printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	//for  (yil = 1; A <= B; yil++)
	//{ 
	//	A = A + A*(double)25/100;
	//	B = B + B*(double)12/100;
	//    printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	//}
	//yil--; // bir tane fazla seker
	
	////////////////////DOWHILE ///////////////////////

	
	//printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	//do
	//{   
	//	
	//	A = A + A*(double)25/100;
	//	B = B + B*(double)12/100;	   
	//	yil++;
	//	printf("A'nin nufusu: %0.0Lf\tB'nin nufusu :  %0.0Lf\tYil: %d\n", A,B,yil);
	//} 
	//while ( A <= B); // 1,3 // 2,1 artýþ hýzý ; 1,3,5,7 : 3,4,5,6 TESTING



	//TEZZZZZZZZZZZZZZZZZZZZZZZZZZ
	printf("\nA ulkesinin nufusu B ulkesininkini %d yil sonra gecer.", yil);
	

	
	_getch();
}
/////////////////////////////////// SORU -2 ////////////////////////////////////*/

/*//////////////////////////////////////////////SORU -3 ///////////////////////////////////
#include <stdio.h>
#include <conio.h>
void main()
{
	int sum,counter;
	counter=0;
	printf("1 ve 1000 arasindaki mukemmel sayilar\n_________________________________________\n");
	for (int i = 1; i < 1000; i++)
	{
		sum = 0;
		for (int j = 1; j < i; j++)
		{
			if(i % j == 0)
			sum+=j;
		}
		if(i == sum)
		printf("Line %d: %d bir mukemmel sayidir.\n", ++counter,i);

	}

	_getch();
}
///////////////////////////////////////SORU-3//////////////////////////////////*/

/*//////////////////////////////////4.SORU-SON//////////////////////////////////////
#include <stdio.h>
#include <conio.h>
bool asalsayi(int N);
void main()
{
	int counter=0;
	printf("Iki basamakli ikiz asal sayilar listesi\n");
	int ix,jy; // THE GREATEST COUPLE

	for (int i = 10; i <= 99; i++)
	{
		for (int j = 10; j <= 99; j++)
		{
			if(asalsayi(i) && asalsayi(j) && (i-j)==2)
			{
			printf("Line %d: %d ve %d ikiz asal sayilardir.\n", ++counter,i,j);
			ix = i;
			jy = j;
			}
		}

	}	
	printf("________________________________________\n");
	printf("%d ve %d en buyuk ikiz asal sayi ciftidir.", ix,jy);
	
	_getch();
	
}


bool asalsayi(int N)
{	
	for (int i = 2; i <= N-1 ; i++)
	{
		if(N % i == 0)
		return false;

	}
	return true;
	
}

////////////////////////////4.SORU-SON///////////////////////////////////*/