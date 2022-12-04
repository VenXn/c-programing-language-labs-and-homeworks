#include<stdio.h>
int main(){
	int a,b;
	printf("sayilarin ebobunu bulmak icin 2 sayi giriniz\n");
	scanf("%d %d",&a,&b);
	if(a==b){
		printf("bu iki sayinin ebobu %d dir",b);
	}
	else if(a%b==0){
		printf("bu iki sayinin ebobu %d dir",b);
	}
	if(b<a){
		for(;a%b>0;b--){
		}
		printf("bu iki sayinin ebobu %d dir",b);	
		}
	else{
		for(;b%a>0;a--){
		}
		printf("bu iki sayinin ebobu %d dir",a);
	}
	return 0;
}
