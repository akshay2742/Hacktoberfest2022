// Java Program to show working of binarySearch()
// Method of Arrays class In a sorted array
// Importing necessary classes
import java.util.Arrays;
// Main class
public class GFG {
 
    // Main driver method
    public static void main(String[] args)
    {
        // Declaring an integer array
        int arr[] = { 10, 20, 15, 22, 35 };
 
        // Sorting the above array
        // using sort() method od Arrays class
        Arrays.sort(arr);
 
        int key = 22;
        int res = Arrays.binarySearch(arr, key);
 
        if (res >= 0)
            System.out.println(
                key + " found at index = " + res);
        else
            System.out.println(key + " Not found");
 
        key = 40;
        res = Arrays.binarySearch(arr, key);
        if (res >= 0)
            System.out.println(
                key + " found at index = " + res);
        else
            System.out.println(key + " Not found");
    }
}
/*
Output: 
22 found at index = 3
40 Not found
*/
