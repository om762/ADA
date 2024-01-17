#include <iostream>
using namespace std;

int expo(int x, int n)
{
    int m = n;
    int power = 1;
    int z = x;

    while (m > 0)
    {
        while (m % 2 == 0)
        {
            m = m / 2;
            z = z * z;
        }
        m = m - 1;
        power = power * z;
    }
    return power;
}

int main()
{
    cout << expo(3, 5) << endl;
    cout << "Original value " << 3 << "^" << 5 << " = " << expo(3, 5) << endl;
    return 0;
}
