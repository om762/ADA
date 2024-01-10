class SelectionSort
{
    static void selectionSort(int A[], int n)
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


    public static void main(String[] args)
    {
        int data[] = {20, 12, 10, 15, 2};
        int size = data.length;
        System.out.print("Sorted Array :");
        selectionSort(data, size);

        for (int i = 0; i < size; i++)
        {
            System.out.print(data[i] + " ");
        }
    }
}