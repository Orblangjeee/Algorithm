
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> list = new List<int>();
            for (int i  = 0; i < 9; i++) 
            {
                int a = int.Parse(Console.ReadLine());
                list.Add(a);
            }
            int max = list.Max();
            Console.WriteLine( max + "\n" + (list.IndexOf(max) + 1));
        }
    }
}