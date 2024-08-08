//Problem Statement: You are given an array. The task is to reverse the array and print it.
// """ Using RECURSIVE method //

#include <bits/stdc++.h>
#include<array>
#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reversearr(int a[],int start ,int endx)
{
     if(start<endx)
     {
    swap(a[start],a[endx]);
    reversearr(a,start+1,endx-1);
     }

}

int main() {

int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
reversearr(a,0,n-1);
printArray(a,n);


}

