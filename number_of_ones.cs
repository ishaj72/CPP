
class Solution
{
    static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());
        string binary = DecimalToBinary(n);
        int consecutiveOnes = CountConsecutiveOnes(binary);
        Console.WriteLine(consecutiveOnes);
    }

    static string DecimalToBinary(int decimalNumber)
    {
        if (decimalNumber == 0)
        {
            return "0";
        }

        string binary = string.Empty;

        while (decimalNumber > 0)
        {
            int remainder = decimalNumber % 2;
            binary = remainder + binary;
            decimalNumber /= 2;
        }

        return binary;
    }

    static int CountConsecutiveOnes(string binary)
    {
        int a = 0;
        int b = 0;

        foreach (char bit in binary)
        {
            if (bit == '1')
            {
                b++;
                if (b > a)
                {
                    a = b;
                }
            }
            else
            {
                b = 0;
            }
        }

        return a;
    }
}

