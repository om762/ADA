import java.util.HashMap;
import java.util.Map;
import java.util.Random;

class PigeonToHole
{

    static Map<Integer, Integer> p2h(int P, int H)
    {
        Map<Integer, Integer> rel = new HashMap<>();
        for (int i = 0; i < P; ++i)
        {
            rel.put(i, -1);
        }

        int currentPigeon = 0;
        int[] emptyHole = new int[H];
        for (int i = 0; i < H; i++)
        {
            emptyHole[i] = i;
        }
        int s = 0;
        int e = H;

        while (P > 0)
        {
            if (s != e)
            {
                Random rand = new Random();
                int randomPos = rand.nextInt(e - s) + s;
                int hole = emptyHole[randomPos];

                rel.put(currentPigeon, hole);

                // Effect
                currentPigeon++;
                P--;

                int temp = emptyHole[randomPos];
                emptyHole[randomPos] = emptyHole[s];
                emptyHole[s] = temp;
                s = s + 1;
            } else
            {
                s = 0;
                for (int i = 0; i < H; i++)
                {
                    emptyHole[i] = i;
                }
            }
        }
        return rel;
    }

    static int findCollision(Map<Integer, Integer> func, int P, int H)
    {
        Map<Integer, Integer> ass = new HashMap<>();

        for (int i = 0; i < P; i++)
        {
            int pigeon = i;
            int hole = func.get(pigeon);

            if (ass.get(hole) == null)
            {
                // If the hole is empty, assign the pigeon to the hole
                ass.put(hole, pigeon);
            } else
            {
                // If the hole is already occupied, we found a collision
                return hole;
            }
        }

        // If no collision is found, return -1
        return -1;
    }

    public static void main(String[] args)
    {
        int P = 7; // Number of pigeons
        int H = 5; // Number of holes

        Map<Integer, Integer> pigeonToHole = p2h(P, H);

        // Print the allocated pigeons to holes
        for (Map.Entry<Integer, Integer> entry : pigeonToHole.entrySet())
        {
            System.out.println("Pigeon " + entry.getKey() + " -> Hole " + entry.getValue());
        }

        int collusionPoint = findCollision(pigeonToHole, P, H);

        System.out.println("Collision at " + collusionPoint);
    }
}
