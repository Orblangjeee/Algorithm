using System;

namespace _1011
{
    class practice_1011
    {
        static void Main(string[] args)
        {
            string num = Console.ReadLine();
            string[] data = num.Split();
            int a = Convert.ToInt32(data[0]);
            int b = Convert.ToInt32(data[1]);
            int sum =a + b;
            Console.WriteLine(sum);
        }
    }
}
