using System;

class MusicListeningLogger
{
    static void Main()
    {
        string[] days = {
            "Monday", "Tuesday", "Wednesday",
            "Thursday", "Friday", "Saturday", "Sunday"
        };

        int[] listeningMinutes = new int[7];

        Console.WriteLine("=== Music Listening Logger ===\n");

        // Collect listening data for each day
        for (int i = 0; i < days.Length; i++)
        {
            Console.Write($"Enter music listening minutes for {days[i]}: ");
            listeningMinutes[i] = Convert.ToInt32(Console.ReadLine());
        }

        Console.WriteLine("\n--- Weekly Music Listening Log ---");

        // Display stored data
        for (int i = 0; i < days.Length; i++)
        {
            Console.WriteLine($"{days[i]}: {listeningMinutes[i]} minutes");
        }

        // Calculate total and average listening time
        int totalMinutes = 0;
        for (int i = 0; i < listeningMinutes.Length; i++)
        {
            totalMinutes += listeningMinutes[i];
        }

        double averageMinutes = (double)totalMinutes / listeningMinutes.Length;

        Console.WriteLine($"\nTotal listening time: {totalMinutes} minutes");
        Console.WriteLine($"Average listening time per day: {averageMinutes:F2} minutes");
    }
}
