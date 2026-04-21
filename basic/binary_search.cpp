#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
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
    int arr[6]={2,4,6,8,12,18};
    int n=6;
    int key;
    cin>>key;
    int index=search(arr,n,key);
    cout<<"index of "<<key<<" is:"<<index;
    return 0;
}