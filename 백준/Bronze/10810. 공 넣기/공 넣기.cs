
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            int bowl = int.Parse(a[0]) ;
            int m = int.Parse(a[1]);

            int[] arr = new int[bowl];
            
            for (int i = 0; i < m; i++)
            {
                string[] s = Console.ReadLine().Split();
                int min = int.Parse(s[0]);
                int max = int.Parse(s[1]);
                int ball = int.Parse(s[2]);

                for (int j = min-1; j < max; j++)
                {
                    arr[j] = ball;
                }
                
            }

            for (int k = 0; k < bowl; k++)
            {
                if (arr[k] != null)
                {
                    Console.Write(arr[k] + " ");
                } else
                {
                    Console.Write(0 + " ");
                }
            }
            
        }
    }
}