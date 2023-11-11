using System;
using System.Numerics;

class BaekJoon
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        Console.WriteLine(BigInteger.Parse(input[0]) + BigInteger.Parse(input[1]));
    }
}