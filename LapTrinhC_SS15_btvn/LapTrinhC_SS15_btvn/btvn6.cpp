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

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[100], n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nMang sau khi sap xep tang dan:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int value, count;
    mostFrequent(arr, n, &value, &count);

    printf("\n\nPhan tu xuat hien nhieu nhat: %d", value);
    printf("\nSo lan xuat hien: %d\n", count);

    return 0;
}

