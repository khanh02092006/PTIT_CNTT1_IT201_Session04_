#include <stdio.h>
#include <stdlib.h>
void doicho(int *a,int *b )
{
    int tmep=*a;
    *a=*b;
    *b=tmep;
}
int sapxeptangdan(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                doicho(&arr[j],&arr[j+1]);
            }
        }
    }
}
int timkiemnhiphan(int *arr,int left,int right,int target)
{
    if (left>right)
    {
        return 0;
    }
    int mid=(left+right)/2;
    if (arr[mid]==target)
    {
        return 1;
    }
     else if (arr[mid]>target)
    {
        return timkiemnhiphan(arr,left,mid-1,target);
    } else
    {
        return timkiemnhiphan(arr,mid+1,right,target);
    }
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu co trong mang");
        scanf("%d", &n);
        if(n<0)
        {
         printf(" nhap so phan tu co trong mang khong hop le");

        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf(" mang chua duoc cap phat ");
        return 1;
    }
    for (int i=0; i<n; i++)
    {
        printf(" nhap phan tu thu %d ",i+1);
        scanf("%d", &arr[i]);

    }
    sapxeptangdan(arr,n);
printf(" mang da duoc xap xep tang dan");
    for (int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
        if (i <n-1) printf(" ,");

    }
    int x;
    printf(" nhap phan thu muon tim kiem ");
    scanf("%d", &x);
    int ketquatimkiem=timkiemnhiphan(arr,0,n-1,x);
    if (ketquatimkiem)
    {
        printf(" phan tu %d co trong mang",x);
    } else
    {
        printf(" phan tu khong  co trong mang");
    }
free(arr);
    return 0;
}
