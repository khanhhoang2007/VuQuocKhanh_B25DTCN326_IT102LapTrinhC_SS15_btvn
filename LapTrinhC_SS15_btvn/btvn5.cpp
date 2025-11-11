#include <stdio.h>

void mostFrequent(int arr[], int n, int *value, int *count){
    int maxCount = 0;
    int maxValue = arr[0];

    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                c++;
            }
        }
        if(c > maxCount){
            maxCount = c;
            maxValue = arr[i];
        }
    }
    *value = maxValue;
    *count = maxCount;
}

int main(){
    int a[100], n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int value, count;
    mostFrequent(a, n, &value, &count);

    printf("Phan tu xuat hien nhieu nhat: %d\n", value);
    printf("So lan xuat hien: %d\n", count);

    return 0;
}

