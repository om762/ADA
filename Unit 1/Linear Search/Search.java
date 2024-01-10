class Search
{

    static void lin(int[] A, int x, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] == x)
            {
                System.out.println("Element Position: " + i);
                return;
            }
        }
        System.out.println("Element not found");
    }

    public static void main(String[] args)
    {
        int[] A = {1, 2, 3, 4, 5};
        int x = 3;
        int n = A.length;
        lin(A, x, n);
    }
}
