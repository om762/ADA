#include <iostream>
using namespace std;

const int MAX = 100;

void magicSquare(int n, int sqr[][MAX])
{
    if (n % 2 == 0)
    {
        cout << "EVEN NUMBER hai yaar";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sqr[i][j] = 0;
        }
    }

    // assign 1 in middle of top row
    int i = 0;
    int j = (n - 1) / 2;
    sqr[i][j] = 1;

    int k, l;

    for (int val = 2; val <= n * n; val++)
    {
        if (i >= 1)
        {
            k = i - 1;
        }
        else
        {
            k = n - 1;
        }

        if (j >= 1)
        {
            l = j - 1;
        }
        else
        {
            l = n - 1;
        }

        if (sqr[k][l] >= 1)
        {
            i = (i + 1) % n;
        }

        else
        {
            i = k;
            j = l;
        }

        sqr[i][j] = val;
    }
}

void checkMagic(int n, int mat[][MAX])
{
    int rowSum[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + mat[i][j];
        }
        rowSum[i] = sum;
    }

    int colSum[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + mat[j][i];
        }
        colSum[i] = sum;
    }

    int digSum[2] = {0, 0};
    for (int i = 0; i < n; i++)
    {
        digSum[0] = digSum[0] + mat[i][i];
        digSum[1] = digSum[1] + mat[i][n-i-1];
    }

    cout << "Sum of rows\tSum of Col\tSum diagonal" << endl;
    // Print the Sum
    for (int i = 0; i < n; i++)
    {
        cout << rowSum[i] << "\t\t" << colSum[i] << "\t\t";
        if ((i == 0) || (i == 1))
        {
            cout << digSum[i];
        }
        else
        {
            cout << "";
        }

        cout << endl;
    }
}

int main()
{
    int x;
    cout << "Enter a ODD Number less 100: ";
    cin >> x;
    int arr[x][MAX];
    magicSquare(x, arr);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[i][j] << "\t";
        }

        cout << endl;
    }

    cout << "\nMAGIC CHECK\n";
    checkMagic(x, arr);
}
