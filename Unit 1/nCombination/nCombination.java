import java.util.ArrayList;
import java.util.List;

public class nCombination
{

    static List<List<Boolean>> comb(int n, List<Boolean> A, List<List<Boolean>> out)
    {
        if (n == 0)
        {
            out.add(new ArrayList<>(A)); // Creating a copy of the list
        } 
        else 
        {
            A.add(true);
            comb(n - 1, A, out);
            A.remove(A.size() - 1);

            A.add(false);
            comb(n - 1, A, out);
            A.remove(A.size() - 1);
        }

        return out;
    }

    public static void main(String[] args)
    {
        List<List<Boolean>> outx = new ArrayList<>();
        List<List<Boolean>> res = comb(3, new ArrayList<>(), outx);

        for (int i = 0; i < res.size(); i++)
        {
            System.out.print(i + " ");
            for (boolean value : res.get(i))
            {
                System.out.print(value + " ");
            }
            System.out.println();
        }
    }
}
