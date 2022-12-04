#include<stdio.h>
#include<math.h>
int main(){
	int n,l,f,a,sum,c=0,p;
	printf("ilk ve son basamaktaki sayiyi swaplamak icin bir sayi giriniz\n");
	scanf("%d",&n);
	a=n;
	f=n%10;
	for(;a>0;){
		l=a;
		a/=10;
	}
	a=n;
	for(;a>0;c++){
		a/=10;
	}
	a=n;
	c-=1;
	p=pow(10,c);
	sum= (f*p)+(a%p-f)+l;
	printf("%d",sum);
	return 0;
}
