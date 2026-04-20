#include<iostream>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(int arr[], int n) {
        
        int freq[1000];   // store frequencies
        int size = 0;     // number of unique elements
        
        for(int i = 0; i < n; i++){
            
            // check if already processed
            bool already = false;
            for(int k = 0; k < i; k++){
                if(arr[k] == arr[i]){
                    already = true;
                    break;
                }
            }
            if(already) continue;
            
            // count frequency
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] == arr[i]){
                    count++;
                }
            }
            
            freq[size++] = count;
        }
        
        // check if frequencies are unique
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                if(freq[i] == freq[j]){
                    return false;
                }
            }
        }
        
        return true;
    }
};