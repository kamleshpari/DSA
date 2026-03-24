#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int result=-1;
     int mid=start+(end-start)/2;
    while(start<=end){
       if(arr[mid]==key){
        result=mid;
        end=mid-1;
       }
       else if(key>arr[mid]){
        start=mid+1;
       }
       else if(key<arr[mid]){
        end=mid-1;
       }
         mid=start+(end-start)/2;
    }
    return result;

}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int result=-1;
     int mid=start+(end-start)/2;
    while(start<=end){
       if(arr[mid]==key){
        result=mid;
        start=mid+1;
       }
       else if(key>arr[mid]){
        start=mid+1;
       }
       else if(key<arr[mid]){
        end=mid-1;
       }
         mid=start+(end-start)/2;
    }
    return result;

}

int main(){
    int arr[]={1,2,3,4,5,5,5,6,7,8,9};

    int first=firstOcc(arr,9,5);
    int last=lastOcc(arr,9,5);
    if(first==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"First Occurence of 5 is at index "<<first<<endl;
        cout<<"Last Occurence of 5 is at index "<<last<<endl;
    }
}