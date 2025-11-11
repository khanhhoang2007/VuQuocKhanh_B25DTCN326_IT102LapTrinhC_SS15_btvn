#include <stdio.h>
void mang(int arr[],int n);
int tongMang(int arr[],int n);
int main(){
	int a[100];
	int n;
	int sum = 0;
	printf("Nhap so phan tu cua mang a: ");
	scanf("%d",&n);
	mang(a,n);
	sum = tongMang(a,n);
	printf("Mang vua nhap: ");
	for(int i =0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("Tong cua mang la: %d",sum);
	return 0;
}
void mang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]\n",i);
		scanf("%d",&arr[i]);
	}
}
int tongMang(int arr[],int n){
	int sum = 0;
		for(int i=0;i<n;i++){
			sum += arr[i];
	}
	return sum;
}

