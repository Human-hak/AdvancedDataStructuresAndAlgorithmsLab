#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int countInRow(int matrix[][N],int row,int col)
{
    int sum=0;
    for(int i=0;i<col;i++)
    {
        sum += isPrime(matrix[row][i]);
    }
    return sum;
}

int countPrimeInMatrix(int matrix[][N],int row,int col)
{
    if(row==0)
    {
        return 0;
    }
    else{
        return countPrimeInMatrix(matrix,row-1,col) + countInRow(matrix,row,col);
    }
}

int main()
{
    int matrix[3][N] =
    {
        {
            1,2,3,4
        },
        {
            4,5,6,7
        },
        {
            7,8,9,10
        }
    };

    int result = countPrimeInMatrix(matrix,3,4);
    printf("%d", result);
    return 0;
}

