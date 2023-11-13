#include<iostream>
using namespace std;

#define NOT_FOUND -1

struct subarray{
    int low, high, sum;
};

//struct subarray result = {low, high, sum};
//return result;

int ternary_search(int arr[], int l, int r, int num)
{
    int mid1 = l + (r-l)/3;
    int mid2 = r - (r-l)/3;

    if(l==r)
    {
        if(arr[l]==num)
        {
            return l;
        }
        else{
            return NOT_FOUND;
        }
    }
    else if(arr[mid1]==num)
    {
        return mid1;
    }
    else if(arr[mid2]==num)
    {
        return mid2;
    }
    else if(l<=r)
    {
        if(num < arr[mid1])
        {
            return ternary_search(arr,l, mid1-1, num);
        }
        else if(num > arr[mid2])
        {
            return ternary_search(arr, mid2+1, r, num);
        }
        else{
            return ternary_search(arr, mid1+1, mid2-1, num);
        }
    }
    else
    {
        return NOT_FOUND;
    }
}

int main()
{
    int arr[] = {4,9,10,12,14,15,19};
    int num = 14;
    int id = ternary_search(arr, 0, 6, num);
    if(id != NOT_FOUND)
    {
        printf("%d Found at %d\n", num, id);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
