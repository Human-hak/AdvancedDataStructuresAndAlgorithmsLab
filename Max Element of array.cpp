#include<bits/stdc++.h>

int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}

int maxElement(int array[],int start, int last)
{
    if(start==last)
    {
        return array[start];
    }
    else{
        int a=array[start];
        int b=maxElement(array,start+1,last);
        if(a>b)return a;
        else return b;
    }
}

int main()
{
    int myArray[] = {32,56,23,45,89,57};
    int result = maxElement(myArray,0,5);
    printf("%d",result);
    return 0;
}
