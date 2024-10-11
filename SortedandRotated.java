import java.util.Scanner;

public class SortedandRotated {
       public static int search(int arr[] , int tar,int si,int ei)
       {
          if(si > ei)
          {
            return -1;
          }
          int mid = si +(ei - si)/2;
          if(arr[mid] == tar)
          {
            return mid;
          }
          //  mid on L1

          if(arr[si] <= arr[mid])
          {
            if(arr[si] <= tar && tar <= arr[mid])
            {
                 return search(arr,tar,si,mid - 1);
            }
            else{
                return search(arr,tar,mid + 1, ei);
            }
          }

          // mid on L2
          else
          {
            if(arr[mid] <= tar && tar <= arr[ei])
            {
                return search(arr,tar,mid+1,ei);
            }
            else
            {
                return search(arr,tar,si,mid - 1);
            }
          }
       }
    public static void main(String args [])
    {
        Scanner sc = new Scanner(System.in);
        int arr [] = new int[7];
        System.out.println("Enter the Element :");
        
        for(int i = 0;i<arr.length;i++)
        {
            arr[i] = sc.nextInt();
        }  
        
      

        
        int target = 6;
        int tarIdx = search(arr,target,0,arr.length -1);
        System.out.println("Index of the element is :");
        System.out.println(tarIdx);
    }
}