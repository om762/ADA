class Expo
{
    static int expo(int x, int n)
    {
        int m = n;
        int power = 1;
        int z = x;
        
        while (m > 0)
        {
            while (m % 2 == 0)
            {
                m = m / 2;
                z = z * z;
            }
            m = m - 1;
            power = power * z;
        }
        return power;
    }

    public static void main(String[] args)
    {
        System.out.println(expo(3, 5));
        System.out.println("Original value " + 3 + "^" + 5 + " = " + expo(3, 5));
    }
}