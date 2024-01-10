class Perm<T>
{
    static <T> void perm(T A[], int n, int k)
    {
        if (k == n)
        {
            System.out.print('[');
            for (T el : A)
            {
                System.out.print(el + ", ");
            }
            System.out.println(']');
        }

        for (int i = k; i < n; i++)
        {
            T t = A[i]; A[i] = A[k]; A[k] = t;
            perm(A, n, k+1);
            t = A[i]; A[i] = A[k]; A[k] = t;
        }
    }

    public static void main(String[] args)
    {
        Character S[] = {'a', 'b', 'c', 'd'};
        perm(S, S.length, 0);
    }
}

