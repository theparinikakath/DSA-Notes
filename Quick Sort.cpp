 public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            int part=partition(arr,low,high);
            quickSort(arr,low,part-1);
            quickSort(arr,part+1,high);
        }
        else{
            return;
        }
    }
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
       int i=low-1; //tracks how many elements smaller than pivot are there
       for(int j=low;j<high;j++)
       {
           if(arr[i]<pivot)
           {
               i++;
               swap(arr[i],arr[j]); //putting all smaller elements before pivot
           }
       }
       i++;
       swap(arr[i],pivot);
       return i;
    }
