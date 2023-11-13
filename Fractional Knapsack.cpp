#include<bits/stdc++.h>
using namespace std;

struct knapsack{
    int count;
    float price;
};

struct item{
    float weight, value;
};

bool compare_item(item a, item b)
{
    float f1 = a.value/a.weight;
    float f2 = b.value/b.weight;
    return f1>f2;
}

void printItems(struct item items[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%f %f\n", items[i].value, items[i].weight);
    }
}

float min_fraction(float a, float b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}

struct knapsack fractional_knapsack(struct item items[], int n, float W)
{
    sort(items, items+n, compare_item);
    int i=0;
    float w = W;//Remaining capacity
    float price = 0;
    while(w>0 && i<n)
    {
        float x = min_fraction(1.0, w/items[i].weight);
        w = w - x*items[i].weight;
        price = price + x*items[i].value;
        i++;
    }
    //struct knapsack result = {i, price};
    //return result;

    return {i, price};
}

int main()
{
    int n;
    float W;
    cin>>n>>W;
    struct item items[n];
    for(int i=0; i<n; i++)
    {
        cin>>items[i].weight>>items[i].value;
    }
    struct knapsack result = fractional_knapsack(items, n, W);
    cout<<"Total Item: "<<result.count<<",Total price: "<<result.price;
    return 0;
}
