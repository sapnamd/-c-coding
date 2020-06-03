using System; 
using System.Text; 
public class GFG 
{ 
    // function to form the largest number by 
    // applying utmost one swap operation 
    static String largestNumber(String num) 
    { 
        int n = num.Length; 
        int right; 
        int[] rightMax = new int[n]; 
  
        // for the rightmost digit, there 
        // will be no greater right digit 
        rightMax[n - 1] = -1; 
  
        // index of the greatest right digit 
        // till the current index from the 
        // right direction 
        right = n - 1; 
  
        // traverse the array from second right 
        // element up to the left element 
        for (int i = n - 1; i >= 0 ; i--) 
        { 
            // if 'num.charAt(i)' is less than the 
            // greatest digit encountered so far 
            if (num[i] < num[right]) 
                rightMax[i] = right; 
  
            else
            { 
                // there is no greater right digit 
                // for 'num.charAt(i)' 
                rightMax[i] = -1; 
  
                // update 'right' index 
                right = i; 
            } 
        } 
  
        // traverse the 'rightMax[]' array from 
        // left to right 
        for (int i = 0; i < n; i++) 
        { 
  
            // if for the current digit, greater 
            // right digit exists then swap it 
            // with its greater right digit and break 
            if (rightMax[i] != -1) 
            { 
                // performing the required swap operation 
                num = swap(num,i,rightMax[i]); 
                break; 
            } 
        } 
  
        // required largest number 
        return num; 
    } 
  
    // Utility method to swap two characters 
    // in a String 
    static String swap(String num, int i, int j) 
    { 
        StringBuilder sb= new StringBuilder(num); 
        sb[i]=num[j]; 
        sb[j]=num[i]; 
        return sb.ToString(); 
  
    } 
  
    //Driver Function to test above Function 
    public static void Main() 
    { 
        String num = "8725634"; 
        Console.WriteLine("Largest Number : " +largestNumber(num)); 
    } 
  
} 
//This code is contributed by mits