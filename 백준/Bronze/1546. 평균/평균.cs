using System.Linq;

namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
         {
            int subject = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split();
            int[] scores = new int[subject];
            for (int i =0; i < input.Length; i++)
            {
                scores[i] = int.Parse(input[i]);
            }

            float sum = 0;
            int max = scores.Max();
            for (int i = 0; i <subject; i++)
            {
                float newScore = (float)scores[i] / max * 100;
                sum += newScore;
            }
            string result = String.Format("{0:N2}",sum / subject);
            Console.WriteLine(result);
        }
    }
}