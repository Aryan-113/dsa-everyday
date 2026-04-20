#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,1,1,3};
    int n = 6;

    for(int i = 0; i < n; i++){
        int count = 0;

        // avoid repeating work
        bool alreadyCounted = false;
        for(int k = 0; k < i; k++){
            if(arr[k] == arr[i]){
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted) continue;

        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }
}