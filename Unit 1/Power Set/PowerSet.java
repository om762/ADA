public class PowerSet
{
    public static void powerSet(String str, int index, StringBuilder curr)
    {
        int n = str.length();
        if (index == n)
        {
            return;
        }
        System.out.println(curr.toString());
        for (int i = index + 1; i < n; i++)
        {
            curr.append(str.charAt(i));
            powerSet(str, i, curr);
            curr.deleteCharAt(curr.length() - 1);
        }
    }

    public static void main(String[] args)
    {
        String str = "abc";
        powerSet(str, -1, new StringBuilder());
    }
}
