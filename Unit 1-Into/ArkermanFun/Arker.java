class Arker {
    public static int ackermann(int m, int n)
    {
        if (m == 0)
        {
            return n + 1;
        } 
        else if (m > 0 && n == 0)
        {
            return ackermann(m - 1, 1);
        } 
        else if (m > 0 && n > 0)
        {
            return ackermann(m - 1, ackermann(m, n - 1));
        }
        return -1; // Error case
    }

    public static void main(String[] args)
    {
        System.out.println(ackermann(3, 4));
    }
}