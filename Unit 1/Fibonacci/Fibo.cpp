#include <iostream>
using namespace std;

void fibo(int n, int a, int b)
{
    if (n > 0)
    {
        cout << a << ", ";
        fibo(n - 1, b, a + b);
    }
}

int main()
{
    fibo(5, 0, 1);
    return 0;
}
