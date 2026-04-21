//find the first and last occurence of a number in an array
//much lest optinmum solution

#include<iostream>
using namespace std;

int occurence_f(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int occurence_l(int arr[],int n,int k){
    int ans;
    for(int i=n-1;i>0;i--){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter to be found:\n";
    int k;
    cin>>k;
    int first=occurence_f(arr,n,k);
    cout<<"the first occurence is at index:"<<first<<endl;
    int last=occurence_l(arr,n,k);
    cout<<"the last occurence is at index:"<<last<<endl;

    return 0;
}