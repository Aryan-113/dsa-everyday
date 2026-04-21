//optimim solution

#include<iostream>
using namespace std;

int occ_f(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            end=end-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int occ_l(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={1,2,2,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter to be found:\n";
    int k;
    cin>>k;
    int first=occ_f(arr,n,k);
    cout<<"the first occurence is at index:"<<first<<endl;
    int last=occ_l(arr,n,k);
    cout<<"the last occurence is at index:"<<last<<endl;
    return 0;
}