class TowerOfHanoi
{
    static void Hanoi(int n, char A, char B, char C)
    // A: Start , B: Destination, C: Auxiliary
    {
        if (n == 1)
        {
            System.out.println("Move disk from "+ A + " to " + B);
        }

        else 
        {
            Hanoi(n-1, A, C, B);
            System.out.println("Move disk from "+ A + " to " + B);
            Hanoi(n-1, C, B, A);
        }
    }

    public static void main(String[] args)
    {
        Hanoi(4, 'A', 'B', 'C');
    }
}