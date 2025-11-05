#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
}

int main() {
    int n;
    printf("Enter how many numbers you want to check: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n);

    return 0;
}
