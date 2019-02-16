#include<bits/stdc++.h>

void DivnCon(int arr[],int i,int j,int& min,int& max)
{


    if (i==j)
    {
        if (max<arr[i])
            max=arr[i];

        if (min>arr[j])
            min=arr[j];
        return;
    }

    if (j-i==1)
    {
        if (arr[i]<arr[j])
        {
            if (min>arr[i])
                min=arr[i];

            if (max<arr[j])
                max=arr[j];
        }
        else
        {
            if (min>arr[j])
                min=arr[j];

            if (max<arr[i])
                max=arr[i];
        }
        return;
    }


    int mid=(i+j)/2;

    DivnCon(arr,i,mid,min,max);

    DivnCon(arr, mid + 1,j, min, max);
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN, min = INT_MAX;

    DivnCon(arr,0, n-1, min, max);

    printf("%d\n",min);
    printf("%d",max);

}
