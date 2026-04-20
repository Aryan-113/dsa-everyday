#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}