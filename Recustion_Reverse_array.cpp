#include <bits/stdc++.h>
using namespace std;

void print(vector<int> nums)
{
    for(auto i: nums) cout<<i<<" ";
}

int main(){

    vector<int> nums = {1 ,2, 3 ,4, 5, 6, 7};
    int temp = 0;
    int k--;
    for(int j = 0; j<k; j++){
        temp = nums[0];
        for(int i = 0; i<nums.size()-1; i++){
            nums[i] = nums[i+1];
        }
            nums[nums.size()-1] = temp;
    }
    print(nums);
}


