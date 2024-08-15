#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(a[j]<a[j-1] && j>0)
        {
            int c=a[j];
            a[j]=a[j-1];
            a[j-1]=c;
            j--;
        }


    }



    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
int arr[]={7,5,9,2,8};
int n=sizeof(arr)/sizeof(arr[0]);
insertion_sort(arr,n);

}
