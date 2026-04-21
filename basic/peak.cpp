#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;  // this is the index
}

int main(){
    int arr[10]={12,13,19,41,55,69,70,71,96,72};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=peak(arr,n);
    cout<<"the index of peak number is:"<<a;
    return 0;
}