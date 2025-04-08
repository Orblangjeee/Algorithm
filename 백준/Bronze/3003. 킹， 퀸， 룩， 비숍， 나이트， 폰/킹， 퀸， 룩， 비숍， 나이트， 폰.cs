namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] chess = new int[] { 1, 1, 2, 2, 2, 8 };
            string[] input = Console.ReadLine().Split();

            for(int i = 0; i < chess.Length; i++)
            {
                int result =  chess[i] - Convert.ToInt32(input[i]);
                Console.Write(result + " ");
            }
        }
    }
}