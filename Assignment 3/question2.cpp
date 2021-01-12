#include <stdio.h>
int rotLeft(int arr[], int n, int d)
{
    int i, j;
    int first;
    for(i=0; i<d; i++)
    {
        first = arr[0];
        for(j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[j] = first;
    }
    return *arr;
}
int main()
{
    int n, d, i;
    scanf("%d",&n);
    scanf("%d",&d);
    int list[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&list[i]);
    }
    rotLeft(list, n, d);
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
}
