#include <stdio.h>

int main(void)
{
    int n;

    // Nhập số lượng phần tử
    do {
        printf("Nhập số lượng phần tử: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Số lượng không hợp lệ!\n");
    } while (n <= 0);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cấp phát bộ nhớ thất bại!\n");
        return 1;
    }

    // Nhập mảng
    printf("Nhập các phần tử:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử nhỏ nhất và chỉ số đầu tiên
    int min = arr[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }

    // In ra chỉ số
    printf("%d\n", index);

    free(arr);
    return 0;
}