
using System.Text;

namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
         {
            StringBuilder stringBuilder = new StringBuilder();
            string input = Console.ReadLine();
            stringBuilder.Append(input);
            Console.WriteLine(stringBuilder.Length);
        }
    }
}