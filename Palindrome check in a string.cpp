#include<bits/stdc++.h>
#include<string>
using namespace std;


bool isPalindrome(string str, int start, int last)
{
   if(start==last)return true;
   else if(start>last)return true;
   else{
        bool flag = str[start]==str[last];
        return flag && isPalindrome(str,start+1,last-1);
   }
}

int main()
{
    string str = "madam";
    int len = str.length();
    bool result = isPalindrome(str,0,len-1);
    if(result)
    {
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}
