
#include<bits/stdc++.h>
using namespace std;

string int2bin(int n)
{
    string res="";
    while(n!=0)
    {
        if(n%2==1)res+='1';
        else
            res+='0';
        n=n/2;
    }
    reverse(res.begin(),res.end());

    return res;
}

int bin2int(string b)
{
    int resn=0,pow=1;
    int l=b.length();
    for(int j=l-1;j>=0;j--)
    {
        if(b[j]=='1')
        {
          resn=resn+pow;
        }
         pow=pow*2;
    }
    return resn;
}

int main()
{
    int num;
    cin>>num;
    string s=int2bin(num);
    cout<<"Bin representation "<<s;

    string bin="1101";
    int i=bin2int(bin);
    cout<<"\nINTEGER is "<<i;

}
