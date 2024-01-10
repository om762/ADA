#include <iostream>
using namespace std;

void lin(int A[], int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            cout << "Element Position: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int x = 3;
    int n = sizeof(A) / sizeof(A[0]);
    lin(A, x, n);
    return 0;
}
