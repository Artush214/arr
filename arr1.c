#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter the numbers: \n");

    int index = 0;
    while (index < 10) {  
        scanf("%d", &arr[index]);
        ++index;
    }

    int min = arr[0]; 
    index = 1;
    while (index < 10) {
        if (min > arr[index]) {
            min = arr[index]; 
        }
        ++index;
    }

    printf("min = %d \n", min);
    return 0;
}                       
