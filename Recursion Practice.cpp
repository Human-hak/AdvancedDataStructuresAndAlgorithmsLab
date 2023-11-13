#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    if(y==0)return 1;
    else return x * power(x,y-1);
}

int digitCount(int n)
{
    if(n==0)return 0;
    else return 1+digitCount(n/10);
}

int digitSum(int n)
{
    if(n==0)return 0;
    else return (n%10)+digitSum(n/10);
}

int main()
{
    return 0;
}
