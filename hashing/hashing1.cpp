#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }


    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        //fetch
        cout<<hash[num]<<endl;
    }
    return 0;
}