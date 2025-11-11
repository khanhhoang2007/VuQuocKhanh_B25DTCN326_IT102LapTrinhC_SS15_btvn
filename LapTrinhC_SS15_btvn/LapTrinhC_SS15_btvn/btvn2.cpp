#include <stdio.h>
int tongChuSo(int n);
int main(){
	int n;
	printf("Nhap mot so n bat ki: ");
	scanf("%d",&n);
	tongChuSo(n);
	
	printf("Tong cac chu so cua so %d la: %d",n,tongChuSo(n));
	
	return 0;
}
int tongChuSo(int n){
    int sum = 0;
    if(n < 0) n = -n; 
    while(n > 0){
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}
