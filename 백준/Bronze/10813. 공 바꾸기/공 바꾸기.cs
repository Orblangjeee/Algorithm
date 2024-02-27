
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] read = Console.ReadLine().Split();
            int basket = int.Parse(read[0]);
            int count = int.Parse(read[1]);

            int[] list = new int[basket];

            for (int i = 0; i < basket; i++)
            {
                list[i] = i + 1;
            }
            for (int i = 0; i< count; i++)
            {
                string[] number= Console.ReadLine().Split();
                int a = int.Parse(number[0]) -1;
                int b = int.Parse(number[1]) -1;
                int temp = 0;
                temp = list[a];
                list[a] = list[b];
                list[b] = temp;

            }
            Console.WriteLine(string.Join(" ", list));

        }
    }
}