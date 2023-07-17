class Solution
{
    public static void Main(string[] args)
    {
        string S = Console.ReadLine();
        try{
            int i = int.Parse(S);
            Console.WriteLine(i);
        }
        catch(Exception e){
            Console.WriteLine("Bad String");
        }
    }
}
