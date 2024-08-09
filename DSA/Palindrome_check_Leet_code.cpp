//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
//it reads the same forward and backward. Alphanumeric characters include letters and numbers.
/* Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/


#include<bits/stdc++.h>
using namespace std;


bool palindrome(string s)
{
    int right=0;
    int left=s.length()-1;
    while(left<right)
        {
            if(!isalnum(s[left]))
             left++;
            else if(!isalnum(s[right]))
             right--;
            else if(tolower(s[left])!=tolower(s[right]))
             return false;
             else
              {
                left++;
                right--;
              }


        }
    return true;
}

int main()
{

 string str="A man, a plan, a canal: Panama";
 bool ans=palindrome(str);

 if(ans==true)
    cout<<"Palindrome";
 else
    cout<<"Not a Palindrome";
}
