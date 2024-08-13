/*
Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	     5  2
        15  1
Explanation: 10 occurs 3 times in the array
             5 occurs 2 times in the array
             15 occurs 1 time in the array
*/

// using HASHING .//
#include<bits/stdc++.h>
using namespace std;

void count_freq(int arr[],int n)
{
    map<int,int> maparr;  // 1st int-index and 2nd int - count

    for(int i=0;i<n;i++)
    {
        maparr[arr[i]]+=1;
    }
    for(auto x : maparr)
    {
       cout<<x.first<<"->"<<x.second<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count_freq(arr,n);

}

