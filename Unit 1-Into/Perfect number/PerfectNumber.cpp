#include<iostream>
using namespace std;

bool perfect(int n)
{
    int sum = 0;
    for (int i=1; i<=(n/2); i++)
    {
        if (n % i == 0)
            sum = sum + i;     
    }
    if (sum == n)
        return true;
    else
        return false;
}

int main()
{
    for (int i=0; i<100; i++)
        {
            if (perfect(i))
            {
                cout<<i<<endl;
            }
        }
}