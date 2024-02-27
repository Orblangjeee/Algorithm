
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int count = int.Parse(Console.ReadLine());
            StringReader reader = new StringReader(Console.ReadLine());
            string[] numbers = reader.ReadLine().Split();
            int[] a = Array.ConvertAll(numbers, s => int.Parse(s));
            Console.WriteLine($"{a.Min()} {a.Max()}");
        }
    }
}