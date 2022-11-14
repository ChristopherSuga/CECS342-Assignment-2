using System;
using System.Collections.Generic;
using System.Linq;
class Program
{
    public static void Main(string[] args)
    {
        double[] numbers = new double[] { 645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25 };
        Dictionary<string, int> people = new Dictionary<string, int>{{"Hal", 20}, {"Susann", 31}, {"Dwight", 19}, {"Kassandra", 21}, {"Lawrence", 25}, {"Cindy", 22}, {"Cory", 27}, {"Mac", 19}, {"Romana", 27}, {"Doretha", 32}, {"Danna", 20},
        {"Zara", 23}, {"Rosalyn", 26}, {"Risa", 24}, {"Benny", 28}, {"Juan", 33}, {"Natalie", 25}};

        Array.Sort(numbers);
        foreach (double i in numbers)
        {
            Console.Write(i + " ");
        }
        var stringSorted = people.OrderBy(x => x.Key);
        var ageSorted = from key in stringSorted orderby key.Value descending select key;
        foreach (var pair in ageSorted)
        {
            Console.WriteLine("{0}, {1}", pair.Key, pair.Value);
        }
    }
}