namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            string b = Console.ReadLine();

            char[] splitB = b.ToCharArray();
           

            for (int i = splitB.Length - 1; i >= 0; i--)
            {
                int number = int.Parse($"{splitB[i]}");
                int sum = a * number;
                Console.WriteLine(sum);
            }
            Console.WriteLine(a * int.Parse(b));
        }
    }
}