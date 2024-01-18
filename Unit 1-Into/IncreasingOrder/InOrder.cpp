#include <iostream>

using namespace std;

void order(int a, int b, int c)
{
    if (a < b && a < c)
    {
        if (b < c)
        {
            cout << a << " " << b << " " << c << endl;
        } else
        {
            cout << a << " " << c << " " << b << endl;
        }
    } else if (b < a && b < c)
    {
        if (a < c)
        {
            cout << b << " " << a << " " << c << endl;
        } else {
            cout << b << " " << c << " " << a << endl;
        }
    } else
{
        if (a < b)
        {
            cout << c << " " << a << " " << b << endl;
        } else {
            cout << c << " " << b << " " << a << endl;
        }
    }
}

int main()
{
    order(7, 3, 6);
    return 0;
}
