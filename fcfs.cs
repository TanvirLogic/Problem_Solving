using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter number of processes: ");
        int n = int.Parse(Console.ReadLine());
        
        int[] arrival = new int[n];
        int[] burst = new int[n];
        int[] completion = new int[n];
        int[] turnaround = new int[n];
        int[] waiting = new int[n];
        
        Console.WriteLine("\nEnter Arrival Time:");
        for (int i = 0; i < n; i++)
        {
            Console.Write($"P{i + 1}: ");
            arrival[i] = int.Parse(Console.ReadLine());
        }
        
        Console.WriteLine("\nEnter Burst Time:");
        for (int i = 0; i < n; i++)
        {
            Console.Write($"P{i + 1}: ");
            burst[i] = int.Parse(Console.ReadLine());
        }
        
        int currentTime = 0;
        for (int i = 0; i < n; i++)
        {
            if (currentTime < arrival[i])
                currentTime = arrival[i];
            
            completion[i] = currentTime + burst[i];
            turnaround[i] = completion[i] - arrival[i];
            waiting[i] = turnaround[i] - burst[i];
            currentTime = completion[i];
        }
        
        Console.WriteLine("\nProcess  Arrival  Burst  Completion  Turnaround  Waiting");
        Console.WriteLine("-------------------------------------------------------");
        
        double totalWT = 0, totalTAT = 0;
        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"P{i + 1}       {arrival[i]}       {burst[i]}       {completion[i]}          {turnaround[i]}         {waiting[i]}");
            totalWT += waiting[i];
            totalTAT += turnaround[i];
        }
        
        Console.WriteLine($"\nAverage Waiting Time: {totalWT / n:F2}");
        Console.WriteLine($"Average Turnaround Time: {totalTAT / n:F2}");
    }
} 