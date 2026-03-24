#include<iostream>
using namespace std;

/*int firstOccurence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid; // Store the index of the found key
            high = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return result; // Return the index of the first occurrence or -1 if not found
}

*/

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;

}

int main(){
     int arr[]={1,2,3,4,5,6,7,8,9};

     int binary=BinarySearch(arr,9,3);
     if(binary==-1){
        cout<<"Element not found";
     }
     else{
        cout<<"Element found at index "<<binary<<endl;
     }
}