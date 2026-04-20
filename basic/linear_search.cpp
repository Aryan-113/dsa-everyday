#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key) return 1;
    }
    return 0;
}

int main(){
    int arr[5]={3,5,425,6,23};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"enter the key to be found\n";
    int key;
    cin>>key;

    bool found=search(arr,n,key);

    if(found) cout<<"key is found\n";
    else cout<<"not found";
    return 0;
}