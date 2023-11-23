#include<stdio.h>
int multiplication(int a,int b){
	int result=a*b;
	printf("%d*%d=%d\n",a,b,result);
	return result;
}
int division(int a,int b){
	if(a>b){
		int result=a/b;
		if(a%b!=0){
			printf("%d khong chia het cho %d\n",a,b);
		}else{
			printf("%d/%d=%d\n",a,b,result);
		}
	}else{
		int result=b/a;
		if(b%a!=0){
			printf("%d khong chia het cho %d\n",a,b);
		}else{
			printf("%d/%d=%d\n",b,a,result);
		}
	}
}
int main(){
	int a,b,c;
	printf("Nhap 3 so a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	int multiplication1=multiplication(a,b);
	int multiplication2=multiplication(b,c);
	int multiplication3=multiplication(c,a);
	int division1=division(a,b);
	int division2=division(c,b);
	int division3=division(a,c);
}
