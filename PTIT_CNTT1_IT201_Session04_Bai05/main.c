#include <stdio.h>
#include <stdlib.h>

void doicho(int *a,int *b)
{
    int tmep=*a;
    *a=*b;
    *b=tmep;
}
int sapxep(int *arr,int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                doicho(&arr[j],&arr[j+1]);
            }
        }
    }
}
int timkiemnhiphan(int *arr,int n,int tager)
{
    int left=0,right=n-1;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if (arr[mid]==tager)
        {
            return mid;
        } else if (arr[mid]<tager)
        {
            left =mid+1;
        } else
        {
            right =mid-1;
        }

    }
    return -1;
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu ");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" nhap so phan tu khong duoc nho ho hoặc bang 0");

        }
    } while (n<=0);
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf(" chua duoc cap phat ");
        return 1;
    }
for (int i=0;i<n;i++)
{
    printf(" nhap phan tu thu %d ",i+1);
    scanf("%d",&arr[i]);
}
 sapxep(arr,n);
    printf(" mang da duoc sap xep tang dan\n");
    for (int i=0;i<n;i++)
    {
        printf(" %d\n",arr[i]);
    }
    int value;
    printf(" nhap phan tu muon tim");
    scanf("%d", &value);
    int timkiemphantu=timkiemnhiphan(arr,n,value);
    if (timkiemphantu==-1)
    {
        printf(" khong tim thay phan tu%d ",value);
    } else
    {
        printf(" phan tu %d co tronng mang tai chi so%d \n",value,timkiemphantu);
    }
free(arr);
    return 0;
}