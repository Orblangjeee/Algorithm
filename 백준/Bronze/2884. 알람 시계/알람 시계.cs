using System.Diagnostics.CodeAnalysis;

namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] clock = Console.ReadLine().Split();
            int hour = int.Parse(clock[0]) * 60;
            int minute = int.Parse(clock[1]);
            int h = ((hour + minute) - 45)/60;
            int m = ((hour + minute) - 45)%60;
            if (m < 0)
            {
                m = 60 + m;
                h--;
                if (h < 0)
                {
                    h = 24 + h;
                }
            } 
            Console.WriteLine(h + " "+ m);
        }
    }
}