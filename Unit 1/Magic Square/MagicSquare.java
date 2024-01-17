import java.util.Scanner;

class MagicSquare
{
    static void magicSquare(int n, int sqr[][])
    {
        if (n%2 == 0)
        {
            System.out.println("EVEN NUMBER");
            return;
        }

        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                sqr[i][j] = 0;
            }
        }

        // Assign 1 to middle of top row
        int i = 0;
        int j = (n-1)/2;
        sqr[i][j] = 1;

        int k, l;

        for (int val = 2; val <= n*n; val++)
        {
            if (i >= 1)
            {
                k = i - 1;
            }
            else
            {
                k = n - 1;
            }

            if (j >= 1)
            {
                l = j - 1;
            }
            else
            {
                l = n - 1;
            }

            if (sqr[k][l] >= 1)
            {
                i = (i + 1)%n;
            }

            else
            {
                i = k;
                j = l;
            }

            sqr[i][j] = val;
        }
    }

    static void checkMagic(int n, int mat[][])
    {
        int rowSum[] = new int[n];
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = sum + mat[i][j];
            }
            rowSum[i] = sum;
        }
    
        int colSum[] = new int[n];
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = sum + mat[j][i];
            }
            colSum[i] = sum;
        }
    
        int digSum[] = {0, 0};
        for (int i = 0; i < n; i++)
        {
            digSum[0] = digSum[0] + mat[i][i];
            digSum[1] = digSum[1] + mat[i][n-i-1];
        }
    
        System.out.println("Sum of rows\tSum of Col\tSum diagonal");
        // Print the Sum
        for (int i = 0; i < n; i++)
        {
            System.out.print(rowSum[i] + "\t\t" + colSum[i] + "\t\t");
            if ((i == 0) || (i == 1))
            {
                System.out.print(digSum[i]);
            }
            else
            {
                System.out.print("");
            }
    
            System.out.println();
        }        
    }

    public static void main(String[] args)
    {
        int x;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a ODD Number less 100: ");
        x = scanner.nextInt();
        scanner.close();

        int arr[][] = new int[x][x];
        magicSquare(x, arr);
    
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }

        System.out.println("\nMAGIC CHECK");
        checkMagic(x, arr);
    }
}
