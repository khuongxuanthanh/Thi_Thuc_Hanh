#include <stdio.h> 
float average (int arr[], int number) {
    int sum = 0;
    int count = 0;
    float average = 0;
    for (int i = 0; i < number; i++) {
        sum += arr[i];
        count++;
    }
    average = (float)sum / count;
    return  average;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &arr[i]); 
    }
    
    printf("Trung binh so ptu mang: %0.2f", average(arr, n));
    return 0;
}
