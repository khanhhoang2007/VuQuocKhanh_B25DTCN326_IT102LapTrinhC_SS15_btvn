#include <stdio.h>
int hieu(int a, int b){
    int kq = a - b;
    if(kq < 0) kq = -kq; 
    return kq;
}
int tich(int a, int b){
    return a * b;
}
int main(){
    int x, y;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
    scanf("%d", &y);

    printf("Su chenh lech giua 2 so = %d\n", hieu(x,y));
    printf("Tich = %d\n", tich(x,y));

    return 0;
    
}

