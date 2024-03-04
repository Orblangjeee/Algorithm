
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            for (int i = 0; i < input; i++)
            {
                string[] text = Console.ReadLine().Split();
                string word = text[1];
                int repeat = int.Parse(text[0]);
                foreach (char s in word)
                {
                    for (int j = 0; j < repeat; j++)
                    {
                        Console.Write(s);
                    }
                    
                }
                Console.WriteLine();
            }
        }
    }
}