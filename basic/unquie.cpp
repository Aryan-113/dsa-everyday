//find unique element
#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,5,7,9,7,5,1};
    int n=7;
    int unq=0;
    for(int i=0;i<n;i++){
        unq=unq^arr[i];
    }
    cout<<"unique element is:"<<unq;
    return 0;
}