
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] list = new int[42];
            int result = 0;
            for (int i = 0; i < 10; i++)
            {
                int remainder = int.Parse(Console.ReadLine())%42;
                list[remainder] = 1;
            }
            foreach (int number in list)
            {
                if (number == 1)
                {
                    result += 1;
                }
            }
            Console.WriteLine(result);
        }
    }
}