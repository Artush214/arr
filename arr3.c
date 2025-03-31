#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter the numbers:\n");

    int index = 0;
    while (index < 10) {
        scanf("%d", &arr[index]);
        index++;
    }
    int min_index = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    printf("min value index: %d\n", min_index);
    return 0;
}
                           
