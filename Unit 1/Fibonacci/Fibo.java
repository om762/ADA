public class Fibo{

    static void fibo(int n, int a, int b) 
    {
        if (n > 0)
        {
            System.out.print(a + ", ");
            fibo(n - 1, b, a + b);
        }
    }

    public static void main(String[] args)
    {
        fibo(5, 0, 1);
    }
}
