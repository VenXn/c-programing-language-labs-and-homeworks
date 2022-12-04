#include<stdio.h>
int main(){
	int dec,bin;
	printf("binary formatina donusturulecek bir deciminal deger giriniz\n");
	scanf("%d",&dec);
	for(;dec>0;){
		printf("%d\n",dec%2);
		dec/=2;
	}
	return 0;
}
/*#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;                                             daha iþlemedik
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  */
