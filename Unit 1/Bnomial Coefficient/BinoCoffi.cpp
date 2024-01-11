#include <iostream>
using namespace std;

int coffi(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    if (k == 0 || k == n)
    {
        return 1;
    }
    
    return coffi(n - 1, k - 1) + coffi(n - 1, k);
}

int main()
{
    cout << coffi(7, 6) << endl;
    return 0;
}