public class Mergesort{
    public static void printArr(int arr[])
    {
        for(int i = 0; i<arr.length - 1;i++)
        {
            System.out.print(arr[i] +"  ");
        }
    }
  public static void  mergeSort(int arr[],int si,int ei)
    {
        if(si >= ei)
        {
            return;
        }
        int mid = (si + (ei - si)/2);
        mergeSort(arr,si,mid);
        mergeSort(arr,mid + 1,ei);

        merge(arr,si,mid,ei);
    }

   public static void merge(int arr[] , int si, int mid, int ei )
    {
        int temp [] = new int[ei - si + 1];
        int i = si; // idx of left subarray
        int j = mid + 1;// idx of right subarray
        int k = 0; //  idx of temp array.

        while(i <= mid && j <= ei)
        {
            if(arr[i] < arr[j])
            {
                temp[k] = arr[i];
                i++;
            }
            else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        // left
        while(i <= mid)
        {
            temp[k++] = arr[i++];

        }
        // Right
        while(j <= ei)
        {
            temp[k++] = arr[j++];
        }

        // copy temp array to origional array.
        for(i = si,k = 0;k <temp.length;k++,i++)
        {
            arr[i] = temp[k];
        }
    }
    public static void main(String args [])
    {
        int arr[] = {55,44,33,22,11};
        mergeSort(arr,0,arr.length - 1);
        printArr(arr);
    }
}