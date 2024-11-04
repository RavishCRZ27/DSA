#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k){
        
        for(int j=1;j<=k;j++)
        {
            vector<int> temp = nums;
            int l=nums[nums.size()-1];
            for(int i=1;i<nums.size();i++)
                {
                    nums[i]=temp[i-1];
                }
            nums[0]=l;
        }
        for(int i=0;i<nums.size();i++){
            cout << nums[i] << " ";
        }
    }
int main(){
    vector<int> vec;
    for(int i=0;i<5;i++){
        vec.emplace_back(i);
    }
    int k=2;
    rotate(vec,k);
}