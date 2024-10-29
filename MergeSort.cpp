#include <iostream>
#include <vector>
using namespace std;

//TIME COMPLEXITY = O(nlogn)

void conquer(vector<int>& arr,int low,int mid,int high)
    {
        vector<int> merged(high - low + 1);
        int i=low,j=mid+1;
        int x=0;
        while(i<=mid && j<=high)
        {
            if(arr[i]<=arr[j]){
                merged[x]=arr[i];
                x++;
                i++;
            }
            else{
                merged[x]=arr[j];
                x++;
                j++;
            }
        }
        while(i<=mid)
        {
            merged[x]=arr[i];
            x++;
            i++;
        }
        while(j<=high)
        {
            merged[x]=arr[j];
            x++;
            j++;
        }
        for(int i=0,j=low;i<merged.size();i++,j++)
        {
            arr[j]=merged[i];
        }
    }
    void mergeSort(vector<int>& arr, int low, int high) 
    {
        // code here
        if(low>=high)//out of bounds case
        {
            return;
        }
        int mid=low+(high-low)/2; //(low+high)/2 for bigger arrays might have space complexity issues
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        conquer(arr,low,mid,high);
    }

int main(){
    vector<int> arr = {6, 3, 9, 5, 2, 8};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    //print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
