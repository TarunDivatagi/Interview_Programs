#include<bits/stdc++.h>
using namespace std;

void select_sort(int a[],int n)
{
    int minn,c,x;
    for(int i=0;i<n-1;i++)
    {
        minn=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minn])
            {
                minn=j;
            }
        }
        c=a[minn];
        a[minn]=a[i];
        a[i]=c;
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}


int main()
{

int arr[]={12,2,8,1,10};
int n=sizeof(arr)/sizeof(arr[0]);
select_sort(arr,n);

}
