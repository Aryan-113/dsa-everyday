//duplicate number in an array
#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number of array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=n*(n-1)/2;
    int ans;
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }

    ans=s-sum;
    cout<<"the duplicate term is:"<<ans;
    return 0;
}