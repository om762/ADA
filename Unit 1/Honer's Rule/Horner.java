class Horner
{
    static int horner(int A[], int n, int x)
    {
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            res = (res * x) + A[i];
        }

        return res;
    }

    public static void main(String[] args)
    {
        int coffi[] = {7, -8, 3, -4, 2, -6};
        int n = 6;
        int x = 2;

        System.out.println("Result: " + horner(coffi, n, x));
    }
}
