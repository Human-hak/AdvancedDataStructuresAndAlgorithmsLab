//17.c
#include<bits/stdc++.h>

using namespace std;

int sumOfSeries(int n)
{
    if(n==0)return 0;
    else return sumOfSeries(n-1)+n*(2*n+1);
}

int main()
{
    int result = sumOfSeries(4);
    printf("Result = %d", result);
    return 0;
}
