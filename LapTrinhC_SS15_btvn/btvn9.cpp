#include <stdio.h>
int removeDuplicates(int arr[], int size){
    int newSize = size;
    for(int i = 0; i < newSize; i++){
        for(int j = i + 1; j < newSize; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < newSize - 1; k++){
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--;
            }
        }
    }
    return newSize;
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

void mostFrequent(int arr[], int n, int *value, int *count){
    int maxCount = 0;
    int maxValue = arr[0];
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) c++;
        }
        if(c > maxCount){
            maxCount = c;
            maxValue = arr[i];
        }
    }
    *value = maxValue;
    *count = maxCount;
}

void findLeastFrequent(int arr[], int n, int *value, int *count){
    int minCount = n + 1;
    int minValue = arr[0];
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) c++;
        }
        if(c < minCount){
            minCount = c;
            minValue = arr[i];
        }
    }
    *value = minValue;
    *count = minCount;
}

int binarySearch(int arr[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(){
    int arr[100] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = 8;

    n = removeDuplicates(arr, n);
    bubbleSort(arr, n);

    printf("Mang sau khi loai trung lap va sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    int maxVal, maxCount;
    mostFrequent(arr, n, &maxVal, &maxCount);
    printf("\nPhan tu xuat hien nhieu nhat: %d (%d lan)", maxVal, maxCount);
    int minVal, minCount;
    findLeastFrequent(arr, n, &minVal, &minCount);
    printf("\nPhan tu xuat hien it nhat: %d (%d lan)", minVal, minCount);

    int x;
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);

    int pos = binarySearch(arr, n, x);
    if(pos != -1) printf("Tim thay %d tai chi so %d\n", x, pos);
    else printf("Khong tim thay %d trong mang\n", x);

    return 0;
}

