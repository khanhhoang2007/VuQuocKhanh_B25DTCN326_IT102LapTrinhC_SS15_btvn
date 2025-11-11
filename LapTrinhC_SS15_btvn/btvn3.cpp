#include <stdio.h>
int daoNguoc(int n);
int main(){
	int n;
	printf("Nhap mot so nguyen bat ki: ");
	scanf("%d",&n);
	daoNguoc(n);
	printf("So dao nguoc cua %d la %d",n,daoNguoc(n));
	return 0;
	
}

int daoNguoc(int n){
    int rev = 0;
    int sign = 1;
    if(n < 0){
        sign = -1;
        n = -n;
    }
    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev * sign;
}

