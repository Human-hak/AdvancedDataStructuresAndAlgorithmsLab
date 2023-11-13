#include<bits/stdc++.h>

using namespace std;

int countEven(int array[],int start,int last)
{
    if(start==last)
        return array[start]%2==0;
    else{
        int first = array[start]%2==0;
        return first + countEven(array,start+1,last);
    }
}

int main()
{
    int myArray[] = {32,56,23,45,89,57};
    int result = countEven(myArray,0,5);
    printf("%d",result);
    return 0;
}
