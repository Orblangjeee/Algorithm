

namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            int timer = int.Parse(Console.ReadLine());
            
            int hour = int.Parse(a[0]);
            int min = int.Parse(a[1]);

            int sum = min + timer;
            hour += sum / 60;
            min = sum % 60;
            if (hour > 23)
            {
                hour -= 24;
            }

            Console.WriteLine(hour+" "+min);
        }
    }
}