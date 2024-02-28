
namespace algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] alphabet = { "a","b","c","d","e","f","g",
                "h","i","j","k","l","m","n","o","p","q","r","s"
                ,"t","u","v","w","x","y","z"};

            for (int i= 0; i< alphabet.Length; i++)
            {
                int num = input.IndexOf(alphabet[i]);
                Console.Write(num+" ");
            }
        }
    }
}