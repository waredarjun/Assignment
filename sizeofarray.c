#include<stdio.h>
int main()
{
    int arr[5] = {10,11,12,13,14};

    printf("%d\n",sizeof(arr));

    int *p = arr;
    printf("%d\n",*p);
    



    return 0;
}