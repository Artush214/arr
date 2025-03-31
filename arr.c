#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter the numbers:\n");

    int index = 0;
    while (index < 10) {
        scanf("%d", &arr[index]);
        index++;
    }
    int max_index = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    printf("Max value index: %d\n", max_index);
    return 0;
}
