using System.Linq;

namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
         {
            string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]);
            int m = int.Parse(input[1]);

            int[] baskets = Enumerable.Range(1,n).ToArray();

            for (int i =0; i < m; i++)
            {
                string[] chages = Console.ReadLine().Split();
                int start = int.Parse(chages[0])-1;
                int end = int.Parse(chages[1])-1;

                for (int j = 0; j < end - start; j++)
                {
                    int temp = baskets[start];
                    baskets[start] = baskets[end - j];
                    baskets[end - j] = temp;
                    start++;
                }
            }
            Console.WriteLine(string.Join(" ",baskets));
        }
    }
}