#include<iostream>
#include<vector>
using namespace std;

    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        vector<int>ans;

        for(int i=0;i<n;i++){
            if(freq[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }

int main(){
    vector<int>nums={2,2};
    vector<int> result=findDuplicates(nums);

    for(int val:result){
        cout<<val<<endl;
    }
    return 0;
}