namespace CsharpAlgorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            char[] num1 = input[0].ToCharArray();
            char[] num2 = input[1].ToCharArray();
            Array.Reverse(num1);
            Array.Reverse(num2);
            if (int.Parse(num1) > int.Parse(num2))
            {
                Console.WriteLine(num1);
            } else
            {
                Console.WriteLine(num2);
            }
            
        }
    }
}
