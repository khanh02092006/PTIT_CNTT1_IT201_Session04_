#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n;
    do
    {
        printf(" nhap so phan tu trong mang");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong duoc nhap âm");
        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d",i+1);
        scanf("%d", &arr[i]);
    }
    int cound=0;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]==arr[n-1-i])
        {
            printf(" cap doi xung la:(%d,%d)\n",arr[i],arr[n-1-i]);
            cound =1;
        }
    }
    if (cound==0)
    {
        printf("khong co phan tu nao");
    }
    free(arr);
    return 0;
}
