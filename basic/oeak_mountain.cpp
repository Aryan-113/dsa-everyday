#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int ans=arr[n/2];
    int index=n/2;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>ans){
            ans=arr[mid];
            index=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return index;
}

int main(){
    int arr[10]={12,13,19,41,55,69,70,71,96,72};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=peak(arr,n);
    cout<<"the index of peak number is:"<<a;
    return 0;
}