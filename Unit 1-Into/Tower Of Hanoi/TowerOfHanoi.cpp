#include<iostream>
using namespace std;

void Hanoi(int n, char A, char B, char C)
// A: Start , B: Destination, C: Auxiliary
{
    if (n ==  1)
        cout<<"Move disk from "<< A << " to "<< B <<endl;
    else
    {
        Hanoi(n-1, A, C, B);
        cout<<"Move disk from "<< A << " to "<< B <<endl;
        Hanoi(n-1, C, B, A);
    }
}

int main()
{
    Hanoi(4, 'A', 'B', 'C');
}