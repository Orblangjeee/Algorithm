namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            int length = input.Length;
            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] == "")
                {
                    length--;
                }
            }
            Console.WriteLine(length);
        }
    }
}