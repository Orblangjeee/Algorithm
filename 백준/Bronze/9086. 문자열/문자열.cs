
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
         {
            int T = int.Parse(Console.ReadLine());
            for(int i = 0; i < T; i++)
            {
                char[] index = Console.ReadLine().ToCharArray();
                Console.WriteLine(index[0].ToString() + index[index.Length-1].ToString());
            }
        }
    }
}