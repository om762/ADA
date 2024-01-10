#include<iostream>
using namespace std;

template <typename T>
void perm(T A[], int n, int k)
{
    if (k == n)
    {
        cout<<"[";
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<", ";
        }
        cout<<"]\n";
    }
    
    for (int i = k; i < n; i++)
    {
        T t = A[i]; A[i] = A[k]; A[k] = t;
        perm(A, n, k+1);
        t = A[i]; A[i] = A[k]; A[k] = t;
    }
}

int main()
{
    char S[] = {'a', 'b', 'c', 'd'};
    perm(S, 4, 0);
}