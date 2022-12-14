#include<stdio.h>
int main(){
	int satir,bosluk,a;
	for(bosluk=4,satir=1;satir<=4;bosluk--,satir++){
		for(a=satir;a>0;a--){
			printf("*");
		}
		for(a=bosluk;a>0;a--){
			printf(" ");
		}
		for(a=satir;a>0;a--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
