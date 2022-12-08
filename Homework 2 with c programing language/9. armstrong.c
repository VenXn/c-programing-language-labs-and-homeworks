#include<stdio.h>
#include<conio.h>
int main(){
//	char b,e,E;
//	enbas: ;
	int n,sum,x,t;
	printf("girdiginiz sayinin armstrong sayisi olup olmadigini bulmak icin bir deger giriniz\n");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		x=n%10;
		sum+=x*x*x;
		n/=10;
	}
	if(sum==t){
		printf("girdiginiz sayi bir armstrong sayisidir\n\n");
	}
	else printf("girdiginiz sayi bir armstrong sayisi degildir\n\n");
//	printf("tekrar denemek icin E tusuna basiniz istemiyorsaniz her hangi bir tusa basiniz\n\n");
//	b=getch();
//	if(b==e||b==E){
	//	return 0;
	//}
	//else {
	//	goto enbas;
//	}
	return 0;
}
