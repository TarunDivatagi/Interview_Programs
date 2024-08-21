/*
Input:
n = 5, arr1[] = {1, 2, 3, 4, 5}
m = 5, arr2 [] = {1, 2, 3, 6, 7}
Output:
1 2 3 4 5 6 7
Explanation:
Distinct elements including both the arrays are: 1 2 3 4 5 6 7. Comman numbers should not be repeated.
*/

#include<bits/stdc++.h>
using namespace std;

void uniona(int arr1[],int arr2[],int m,int n)
{
    vector <int> result;
    map <int,int> freq; // create a map

    for(int i=0;i<m;i++) // make entry in it of arr 1
        freq[arr1[i]]+=1;

    for(int i=0;i<n;i++) // make entry of arr 2
        freq[arr2[i]]++;

    for(auto &j : freq)
      result.push_back(j.first);

    for(int num:result)
      cout<<num<<" ";

}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,8,9,6,7};
    int m=5,n=5;
    uniona(arr1,arr2,m,n);
    return 0;
}
