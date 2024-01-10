class arrayMax
{
    static int maxOfArray(int A[], int n)
    {
        int result = A[0];
        for (int i=1; i<n; i++)
        {
            if (A[i] > result)
                result = A[i];
        }
        return result;
    }

    public static void main(String[] args)
    {
        int Array[] = {33, 43, 54, 24, 53, 11, 3};
        // int Array[] = {};
        int lenght = Array.length;
        System.out.println(maxOfArray(Array, lenght));
    }
}