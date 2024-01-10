#include<iostream>
using namespace std;

int maxOfArray(int A[], int n)
{
    int result = A[0];
    for (int i=1; i<n; i++)
    {
        if (A[i] > result)
            result = A[i];
    }
    return result;
}

int main()
{
    int Array[] = {1,3,55,43,5,356,745,67,3};
    // int Array[] = {};
    int length = sizeof(Array)/sizeof(int);
    cout<<maxOfArray(Array, length);
    return 0;
}