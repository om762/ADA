#include<iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
    int i, j, temp;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  SelectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  for (int i = 0; i < size; i++)
  {
    cout << data[i] << " ";
  }
}