
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
         {
            int n = int.Parse(Console.ReadLine());
            string input = Console.ReadLine();
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                char inputs = input[i];
                sum += int.Parse(inputs.ToString()); ;
            }
            Console.WriteLine(sum);
        }
    }
}